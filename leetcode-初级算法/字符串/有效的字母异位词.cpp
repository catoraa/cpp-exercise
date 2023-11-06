#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> tag;
        int lens=s.length(),lent=t.length();
        for (int i = 0; i < lens; i++)
        {
            auto it=tag.find(s[i]);
            if(it!=tag.end())tag[s[i]]++;
            else tag[s[i]]=1;
        }
        for (int i = 0; i < lent; i++)
        {
            auto it=tag.find(t[i]);
            if(it!=tag.end())tag[t[i]]--;
            else tag[s[i]]=1;
        }
        for (auto it=tag.begin();it!=tag.end(); it++)
        {
            if(it->second!=0)return false;
        }
        return true;
    }
};

int main(){

    return 0;
}