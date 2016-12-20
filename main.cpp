#include "prototype.h"

int main() {
    //cout<<guessNumber(2126753390)<<endl;
    vector<int> nums={1,0,1,-4,-3};
    if(find132pattern_opt(nums))    cout<<"true"<<endl;
    else    cout<<"false"<<endl;
    return 0;
}