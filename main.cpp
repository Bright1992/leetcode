#include "prototype.h"

int main() {
    //cout<<guessNumber(2126753390)<<endl;
//    vector<int> nums={1,0,1,-4,-3};
//    if(find132pattern_opt(nums))    cout<<"true"<<endl;
//    else    cout<<"false"<<endl;
//    vector<vector<int>> matrix;
//    matrix.push_back({3,4,5});
//    matrix.push_back({3,2,6});
//    matrix.push_back({2,2,1});
//    cout<<longestIncreasingPath(matrix)<<endl;
//    cout<<lengthLongestPath_opt("dir\n\tsubdir1\n\n\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ex\tt")<<endl;
    vector<int> nums={-1, 0, 1, 2, -1, -4};
    cout<<maxRotateFunction(nums)<<endl;
    threeSum(nums);
    unordered_set<string> us({"ted","tex","red","tax","tad","den","rex","pee"});
//    us.insert("asdf");
    findLadders("red","tax",us);
    return 0;
}
