//
// Created by bright on 16-12-21.
//

#include <vector>
#include <string>

using namespace std;

class ftree388{
public:
    ftree388(string dirname, int depth, int length, ftree388* parent=NULL)
    :dirname(dirname), depth(depth),length(length),parent(parent) {}
    ~ftree388(){}
    void append(string dirname){
        int length=this->length+dirname.size()+1;
        child.push_back(new ftree388(dirname,depth+1,length,this));
    }
    string dirname;
    vector<ftree388*> child;
    ftree388* parent;
    int depth;
    int length;
};

int lengthLongestPath(string input){
    int depth=1,s=input.size();
    string dirname("");
    ftree388 *root = new ftree388(dirname,0,0);
    int flag=1;
    int maxlength=0;
    for(int i=0;i<s;++i){
        if((flag==0||input[i]!='\t')&&input[i]!='\n') {
            dirname += input[i];
            flag = 0;
        }
        if(input[i]=='\n'||i==s-1){
            flag=1;
            while(depth<=root->depth)
                root=root->parent;
            depth=1;
            root->append(dirname);
            root=*(root->child.rbegin());
            if(dirname.find('.')!=string::npos)
                maxlength=max(maxlength,root->length);
            dirname="";
        }
        else if(flag==1&&input[i]=='\t'){
            depth++;
        }
    }
    return max(0,maxlength-1);
}

int lengthLongestPath_opt(string input){
    int maxi=0,count=0,d=1;
    bool isFile=false;
    vector<int> level(1000,0);
    for(int i=0,s=input.size();i<s;++i){
        while(i<s&&input[i]=='\t'){
            d++;
            i++;
        }
        while(i<s&&input[i]!='\n'){
            count++;
            if(input[i]=='.')
                isFile=true;
            i++;
        }
        level[d]=level[d-1]+count+1;
        if(isFile)
            maxi=max(level[d-1]+count,maxi);
//        while(i<s&&input[i]=='\n')  ++i;
        d=1;count=0;isFile=false;
    }
    return maxi;
}