//
// Created by bright on 16-12-19.
//
#ifndef LEETCODE_PROTOTYPE_H
#define LEETCODE_PROTOTYPE_H

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

string convert(string text, int nRows); //6
int findRadius(vector<int> &houses, vector<int> &heaters);  //475
int totalQueens(int n); //52
int guessNumber(int n); //374
bool find132pattern(vector<int>& nums);  //456
bool find132pattern_opt(vector<int> &nums); //456 opt
int lengthLongestPath(string input); //388
int lengthLongestPath_opt(string input);    //388
int longestIncreasingPath(vector<vector<int>>& matrix);  //329
int nthUglyNumber(int n);   //264
int nthUglyNumber_opt(int n);   //264
vector<int> majorityElement(vector<int>& nums); //Majority Element II
int maxRotateFunction(vector<int>& A);  //396
vector<vector<int>> threeSum(vector<int>& nums);    //15

#endif //LEETCODE_PROTOTYPE_H
