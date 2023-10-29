#include<stdio.h>

struct ListNode {
      int val;
      struct ListNode *next;
  };

bool hasCycle(struct ListNode *head) {
    if(!head||!head->next)return false;
    struct ListNode *p=head,*q=head;
    while (q->next&&q->next->next){
        p=p->next;
        q=q->next->next;
        if(p==q)return true;
    }
    return false;
}//自己写的

bool hasCycle(struct ListNode *head) {
    if (!head||!head->next) return false;
    struct ListNode *slow = head,*fast = head->next;
    while (slow != fast) {
        if (!fast||!fast->next)return false;
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;
}//chatgpt写的

int main(){

    return 0;
}