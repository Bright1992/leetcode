//
// Created by bright on 16-12-19.
//
#include <iostream>
using namespace std;
int n374=1702766719;
int guess(int num){
    if(num>n374)    return -1;
    if(num<n374)    return 1;
    return 0;
}

int guessNumber(int n){
    long long cmp=-1,mylastguess0=0,mylastguess1=n,myguess=n;
    while((cmp=guess(myguess))!=0){
        if(cmp==-1){
            mylastguess1=myguess;
            myguess=(myguess+mylastguess0)/2;
        }
        if(cmp==1){
            mylastguess0=myguess;
            myguess=(myguess+mylastguess1)/2;
        }
        cout<<myguess<<endl;
    }
    return myguess;
}