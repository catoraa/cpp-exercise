#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};//单链表模板


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *prehead=new ListNode(-1);
        ListNode *p=list1,*q=list2,*prev=prehead;
        //prev用于指示合并元素，p和q用于指示下一元素
        while (p&&q)
        {
            if(p->val<q->val){
                prev->next=p;
                p=p->next;
            }//prev负责合并，p负责指示下一元素
            else{
                prev->next=q;
                q=q->next;
            }//prev负责合并，q负责指示下一元素
            prev=prev->next;//后移一位元素
        }
        prev->next=p==NULL?q:p;
        //判空，若p空说明l1无下一元素，prev始终保持l2合并，否则始终保持l1合并
        return prehead->next;

    }
};

int main(){

    return 0;
}


