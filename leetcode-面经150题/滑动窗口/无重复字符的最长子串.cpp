#include<iostream>
#include<queue>
using namespace std;
//滑动窗口本质上就是队列！

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=s.size(),max=0;
        int tag[128]={0};
        queue<char> q;
        if(len==0) return 0;
        for(int i=0;i<len;i++)
        {
            q.push(s[i]);
            tag[s[i]]++;
            while(tag[s[i]]>1)
            {
                tag[q.front()]--;
                q.pop();
            }
            if (q.size()>max)max=q.size();
        }
        return max;
    }
};

int main(){

    return 0;
}