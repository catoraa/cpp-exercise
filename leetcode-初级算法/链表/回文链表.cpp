#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};//单链表模板

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *p=head;
        stack<int> s;
        while (p->next)
        {   
            p=p->next;
            if(s.top()==p->val) s.pop();
            if (s.empty()||s.top()!=p->val)
            {
                s.push(p->val);
            }
            
        }
        if (s.empty())return true;
        else return false;
    }
};

int main(){

    return 0;
}


