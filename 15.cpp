//
// Created by Bright on 2017/1/3.
//

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
    int s=nums.size();
    vector<vector<int>> ret(0);
    if(s<3)
        return ret;
    sort(nums.begin(),nums.end());
    int t1=0,t2=0;
    for(int i=0;i<s-2;++i){
        if(i>0&&t1==nums[i])    continue;
        t1=nums[i];
        for(int j=s-1;j>i+1;--j){
            if(j<s-1&&t2==nums[j])  continue;
            t2=nums[j];
            vector<int>::iterator tar;
            if((tar=find(nums.begin()+i+1,nums.begin()+j,-t1-t2))!=nums.begin()+j)
                ret.push_back({t1,*tar,t2});
        }
    }
    return ret;
}