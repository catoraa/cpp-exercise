#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    node* next; 
}node;

void DelNext(node* p){
    node* q=p->next;
    p=p->next->next;
    free(q);
}

void del_n(node* n,int k){
    node* p=n,*q=n;
    for (int i = 0; i < k; i++){
        q=q->next;
    }
    while (q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    DelNext(p);

}


int main(){
    return 0;
}