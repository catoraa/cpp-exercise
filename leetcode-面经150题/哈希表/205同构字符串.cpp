#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int tag[128]={-1};
        int len=s.size();

        for(int i=0;i<len;i++){
            if(tag[s[i]]==-1)tag[s[i]]=t[i];
            if(tag[s[i]]!=t[i])return false;
        }
        for (int i = 0; i < 20; i++)
        {
            cout<<tag[i]<<' ';
        }
        
        return true;
    }
};

int main(){
    string s="egg";
    string t="add";
    Solution a;
    int b=a.isIsomorphic(s,t);
    cout<<b<<endl;
    
    return 0;
}