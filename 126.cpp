//
// Created by Bright on 2017/1/3.
//

#include <vector>
#include <string>
#include <unordered_set>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_DEPTH 1000000

int getDist(string s1,string s2){
    int dist=0;
    for(int i=0,n=s1.size();i<n;++i)
        dist+=(s1[i]!=s2[i]);
    return dist;
}

vector<vector<string>> findLadders(string beginWord, string endWord, unordered_set<string> &wordList){
    vector<string> wordList2;
    for(auto itr=wordList.begin();itr!=wordList.end();++itr){
        if(itr->size()==beginWord.size())
            wordList2.push_back(*itr);
    }
    int s=wordList2.size();
    vector<int> map(s,MAX_DEPTH);
    queue<int> q,q2;
    q.push(-1);
    q2.push(0);
    vector<vector<int>> prev(s+1,vector<int>(0));
    vector<vector<string>> ret;
    int cur=0,depth=0,cdepth=MAX_DEPTH;
    bool found=false;
    if(getDist(beginWord,endWord)==1){
        ret.push_back({beginWord,endWord});
        return ret;
    }
    int cnt=0;
    while(!q.empty()){
        cur=q.front();
        depth=q2.front();
        q.pop();
        q2.pop();
//        cnt++;
        if(!found||depth<=cdepth) {
            for (int i = 0; i < s; ++i) {
                if (map[i]<depth) continue;
                if ((cur < 0 && getDist(beginWord, wordList2[i]) == 1) ||
                    (cur >= 0 && getDist(wordList2[cur], wordList2[i]) == 1)) {
                    if(find(prev[i].begin(),prev[i].end(),cur)==prev[i].end())
                        prev[i].push_back(cur);
                    if(map[i]==MAX_DEPTH&&getDist(wordList2[i],endWord)==1) {
                        prev[s].push_back(i);
                        if(!found)  cdepth=depth;
                        found=true;
                        map[i] = depth;
                        continue;
                    }
                    if(map[i]==MAX_DEPTH) {
                        map[i] = depth;
                        q.push(i);
                        q2.push(depth + 1);
                    }
                }
            }
        }
    }
    queue<int> q3;
    queue<vector<string>> q4;
    if(prev[s].size()==0)
        return ret;
    for(auto a : prev[s]) {
        q3.push(a);
        q4.push(vector<string>({endWord}));
    }
    while(!q3.empty()){
        int tmp3=q3.front();
        vector<string> tmp4=q4.front();
        q3.pop();
        q4.pop();
        if(tmp3==-1){
            tmp4.push_back(beginWord);
            vector<string> tmp5;
            for(auto itr=tmp4.rbegin();itr<tmp4.rend();++itr)
                tmp5.push_back(*itr);
            ret.push_back(tmp5);
            continue;
        }
        tmp4.push_back(wordList2[tmp3]);
        for(auto a:prev[tmp3]) {
            q4.push(tmp4);
            q3.push(a);
        }
    }
//    cout<<ret.size()<<endl;
    return ret;
}

#include <unordered_map>
bool findLaddersHelper(
        unordered_set<string> &words1,
        unordered_set<string> &words2,
        unordered_set<string> &dict,
        unordered_map<string, vector<string> > &nexts,
        bool &words1IsBegin) {
    words1IsBegin = !words1IsBegin;
    if (words1.empty())
        return false;
    if (words1.size() > words2.size())      //when words2 exhausted.
        return findLaddersHelper(words2, words1, dict, nexts, words1IsBegin);
    for (auto it = words1.begin(); it != words1.end(); ++it)
        dict.erase(*it);
    for (auto it = words2.begin(); it != words2.end(); ++it)
        dict.erase(*it);
    unordered_set<string> words3;
    bool reach = false;
    for (auto it = words1.begin(); it != words1.end(); ++it) {
        string word = *it;
        for (auto ch = word.begin(); ch != word.end(); ++ch) {
            char tmp = *ch;
            for (*ch = 'a'; *ch <= 'z'; ++(*ch))
                if (*ch != tmp)
                    if (words2.find(word) != words2.end()) {
                        reach = true;
                        words1IsBegin ? nexts[*it].push_back(word) : nexts[word].push_back(*it);
                    }
                    else if (!reach && dict.find(word) != dict.end()) {
                        words3.insert(word);
                        words1IsBegin ? nexts[*it].push_back(word) : nexts[word].push_back(*it);
                    }
            *ch = tmp;
        }
    }
    return reach || findLaddersHelper(words2, words3, dict, nexts, words1IsBegin);
}
void getPath(
        string beginWord,
        string &endWord,
        unordered_map<string, vector<string> > &nexts,
        vector<string> &path,
        vector<vector<string> > &paths) {
    if (beginWord == endWord)
        paths.push_back(path);
    else
        for (auto it = nexts[beginWord].begin(); it != nexts[beginWord].end(); ++it) {
            path.push_back(*it);
            getPath(*it, endWord, nexts, path, paths);
            path.pop_back();
        }
}
vector<vector<string> > findLadders_opt(string beginWord, string endWord, unordered_set<string> &dict) {
    vector<vector<string> > paths;
    vector<string> path(1, beginWord);
    if (beginWord == endWord) {
        paths.push_back(path);
        return paths;
    }
    unordered_set<string> words1, words2;
    words1.insert(beginWord);
    words2.insert(endWord);
    unordered_map<string, vector<string> > nexts;
    bool words1IsBegin = false;
    if (findLaddersHelper(words1, words2, dict, nexts, words1IsBegin))
        getPath(beginWord, endWord, nexts, path, paths);
    return paths;
}