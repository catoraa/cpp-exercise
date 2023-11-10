#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};//单链表模板

ListNode* reverseList(ListNode *head) {

    ListNode* newHead= new ListNode(head->val);  // 新链表的头指针
    ListNode* p = head;  // 当前处理的节点
    ListNode* next;

    while (p)
    {
        ListNode* n=new ListNode(p->val);
        q->
    }
    return newHead;  // 返回新链表的头指针
}

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *p=head,*q=reverseList(head);
        
        while (p)
        {
            if(p->val!=q->val)return false;
            p=p->next;
            q=q->next;
        }
        return true;
    }
};

int main(){

    return 0;
}


