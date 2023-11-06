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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0,sum=0;
        ListNode *p=l1,*q=l2;
        if(p->next&&q->next){
            sum=p->val+q->val+carry;
            if(sum>10)sum=sum-10,carry++;
            p->val=sum;
        }
        if(p->next&&!q->next)q->next
        if(!p->next&&q->next)
        if(!p->next&&!q->next&&carry==1){
            ListNode n=ListNode(carry);
            p->next=n;
        }
        if

        return l1;
    }
};

int main(){

    return 0;
}