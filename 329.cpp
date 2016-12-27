//
// Created by Bright on 2016/12/27.
//

#include <vector>
#include <iostream>

using namespace std;

#define M 100
#define N 100
int map[M][N],LEN[M][N];

int dfs(vector<vector<int>> &matrix,int x,int y){
    if(LEN[x][y]>0)
        return LEN[x][y];
    int s1=matrix.size(),s2=matrix[0].size();
    int ret=1;
    map[x][y]=1;
    if(x>0&&map[x-1][y]==0&&matrix[x][y]<matrix[x-1][y])
        ret=max(ret,dfs(matrix,x-1,y)+1);
    if(x<s1-1&&map[x+1][y]==0&&matrix[x][y]<matrix[x+1][y])
        ret=max(ret,dfs(matrix,x+1,y)+1);
    if(y>0&&map[x][y-1]==0&&matrix[x][y]<matrix[x][y-1])
        ret=max(ret,dfs(matrix,x,y-1)+1);
    if(y<s2-1&&map[x][y+1]==0&&matrix[x][y]<matrix[x][y+1])
        ret=max(ret,dfs(matrix,x,y+1)+1);
//    cout<<x<<' '<<y<<' '<<ret<<endl;
    map[x][y]=0;
    LEN[x][y]=ret;
    return ret;
}

int longestIncreasingPath(vector<vector<int>>& matrix){
    int s1=matrix.size();
    if(s1==0)    return 0;
    int s2=matrix[0].size();
    for(int i=0;i<s1;++i)
        for(int j=0;j<s2;++j) {
            map[i][j] = 0;
            LEN[i][j] = 0;
        }
    int length=0;
    for(int i=0;i<s1;++i)
        for(int j=0;j<s2;++j)
            length=max(length,dfs(matrix,i,j));
    return length;
}
