#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> tag;
        int len=s.length(),min=len;
        for (int i = 0; i < len; i++)
        {
            auto it=tag.find(s[i]);
            if(it!=tag.end()){
                it->second=-1;//找到重复字符，标记归零
            }
            else {
                tag[s[i]]=i;//第一次访问，标记第一次出现的下标
            }
        }
        for (auto it=tag.begin();it!=tag.end(); it++)
        {
            if(it->second>=0&&it->second<min)min=it->second;
        }
        return min==len?-1:min;
    }
};

int main(){

    return 0;
}