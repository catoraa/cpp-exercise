#include<stdio.h>

typedef struct List
{
    int data;
    struct List* next;
}LIST;

LIST* reverse(LIST* head){
    LIST *p=NULL,*q=NULL;
    p=head;
    q=head->next;
    while (q!=NULL)
    {
        p->next=q->next;
        q->next=head;
        head=q; 
        q=p->next;
    }
    p=NULL;
    return head;
}

int main(){
    return 0;
}
