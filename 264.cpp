//
// Created by Bright on 2016/12/27.
//
#include <vector>
using namespace std;
int nthUglyNumber(int n){
    int p2=0,p3=0,p5=0;
    if(n==0)    return 0;
    if(n==1)    return 1;
    vector<int> ugs={1};
    int cur_ug=0,next_ug=0,forward=0;
    for(int i=1;i<n;++i){
        cur_ug=*ugs.rbegin();
        if(2*ugs[p2]==cur_ug)
            ++p2;
        if(3*ugs[p3]==cur_ug)
            ++p3;
        if(5*ugs[p5]==cur_ug)
            ++p5;
        if(2*ugs[p2]<3*ugs[p3]){
            forward=2;
            next_ug=2*ugs[p2];
        }
        else{
            forward=3;
            next_ug=3*ugs[p3];
        }
        if(5*ugs[p5]<next_ug){
            forward=5;
            next_ug=5*ugs[p5];
        }
        ugs.push_back(next_ug);
        switch(forward){
            case 2:
                p2++;break;
            case 3:
                p3++;break;
            case 5:
                p5++;break;
        }
    }
    return *ugs.rbegin();
}

int nthUglyNumber_opt(int n){
    if(n<=0)    return 0;
    if(n==1)    return 1;
    vector<int> dp(n);
    dp[0]=1;
    int p2=0,p3=0,p5=0;
    for(int i=1;i<n;++i){
        dp[i]=min(dp[p2]*2,min(dp[p3]*3,dp[p5]*5));
        if(dp[i]==dp[p2]*2) p2++;
        if(dp[i]==dp[p3]*3) p3++;
        if(dp[i]==dp[p5]*5) p5++;
    }
    return *dp.rbegin();
}