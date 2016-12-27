//
// Created by Bright on 2016/12/27.
//

#include <vector>

using namespace std;

vector<int> majorityElement(vector<int> &nums) {
    int len = nums.size();
    vector<int> candidate(3, 0), valid(3, 0), cnt(3, 0), ncnt(3, 0);
    int flag = 0;
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (valid[j] == 1 && candidate[j] == nums[i]) {
                cnt[j]++;
                flag = 1;   //found
            }
            if (valid[j] == 1 && candidate[j] != nums[i]) {
                ncnt[j]++;
                if (cnt[j]*2 < ncnt[j]) {
                    valid[j] = cnt[j] = ncnt[j] = 0;
                }
            }
        }
        if (flag == 0) {    //not found
            for (int j = 0; j < 3; ++j)
                if (valid[j]==0) {
                    valid[j]=1;
                    candidate[j]=nums[i];
                    cnt[j]=1;
                    break;
                }
        }
        flag=0;
    }
    cnt[0]=cnt[1]=cnt[2]=0;
    for(int i=0;i<len;++i)
        for(int j=0;j<3;++j)
            if(valid[j]==1&&nums[i]==candidate[j])
                cnt[j]++;
    vector<int> ret;
    for(int j=0;j<3;++j)
        if(valid[j]==1&&cnt[j]>len/3)
            ret.push_back(candidate[j]);
    return ret;
}