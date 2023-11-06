#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* cur,*p=list1,*q=list2,*front;
        if(p->val>=q->val)front=list2;
        else front=list1;
        while (cur->next!=NULL)
        {   
            if(p->val>=q->val){
                cur=p;
                p=p->next;
                p->next=q;
            }
            else{
                cur=q;
                q=q->next;
                q->next=p;
            }
        }
        return front;
    }
};

int main(){

    return 0;
}