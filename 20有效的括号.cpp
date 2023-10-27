#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        if(s.size()==0)return false;
        for (int i = 0; i < s.size(); i++)
        {   
            if(!st.empty()&&s[i]==')'&&st.top()=='(')st.pop();
            else if(!st.empty()&&s[i]==']'&&st.top()=='[')st.pop();
            else if(!st.empty()&&s[i]=='}'&&st.top()=='{')st.pop();
            else st.push(s[i]);
        }
        if (st.empty())return true;
        else return false;
    }
};

int main(){
    string s="][";
    Solution a;
    printf("%d",a.isValid(s));
    return 0;
}