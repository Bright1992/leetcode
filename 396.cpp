//
// Created by Bright on 2017/1/3.
//

#include <vector>
#include <iostream>
using namespace std;

int maxRotateFunction(vector<int>& A){
    int n=A.size();
    int sum=0,msum=0,tsum=0;
    for(int i=0;i<n;++i) {
        msum += i * A[i];
        sum += A[i];
    }
    tsum=msum;
    for(int i=n-2;i>=0;--i){
        tsum=tsum+sum-n*A[i+1];
        msum=max(msum,tsum);
    }
    return msum;
}