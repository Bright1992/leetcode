//
// Created by bright on 16-12-20.
//

#include <vector>
#include <iostream>

using namespace std;

#define INF456 0x7FFFFFFF

int findp(vector<int> &v, int t) {
    int s = v.size();
    int l = 0, r = s - 1, m = 0;
    while (l <= r) {
        m = (l + r) / 2;
        if (v[m] == t) {
            while (m >= 0 && v[m] == t) --m;
            return m + 1;
        }
        if (v[m] > t)
            r = m - 1;
        else
            l = m + 1;
    }
    if (v[m] > t) return m;
    else return m + 1;
}

bool find132pattern(vector<int> &nums) {
    int s = nums.size();
    if (s < 3) return false;
    vector<int> lmin(s, INF456), rmax(s, INF456);
    for (int i = 1; i < s; ++i) {
        if (nums[i - 1] < lmin[i - 1])
            lmin[i] = nums[i - 1];
        else
            lmin[i] = lmin[i - 1];
    }
    vector<int> rpart(1, 0);
    rpart[0] = nums[s - 1];
    for (int i = s - 2; i >= 0; --i) {
        int p = findp(rpart, nums[i]);
        if (p == 0)
            rpart.insert(rpart.begin(), nums[i]);
        else {
            rmax[i] = rpart[p - 1];
            rpart.insert(rpart.begin() + p, nums[i]);
        }
        if (rmax[i] < nums[i] && lmin[i] < nums[i] && rmax[i] > lmin[i])
            return true;
    }
    return false;
}