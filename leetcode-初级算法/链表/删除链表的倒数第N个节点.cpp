#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};//单链表模板
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy=new ListNode(0,head);//手动建立真正的头结点
        ListNode *r=head,*l=dummy;
        for (int i = 0; i < n; i++)r=r->next;
        while (r)r=r->next,l=l->next;
        l->next=l->next->next;
        head=dummy->next;
        return head;
    }
};

int main(){

    return 0;
}
