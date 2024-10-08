#include<stdio.h>
#include<stdlib.h>


struct ListNode {
      int val;
      struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if(list1==nullptr) return list2;
    else if (list2==nullptr) return list1;
    else if (list1->val<list2->val){
        list1->next=mergeTwoLists(list1->next,list2);
        return list1;
    }
    else{
        list2->next=mergeTwoLists(list1,list2->next);
        return list2;
    }
}


int main(){
    return 0;
}