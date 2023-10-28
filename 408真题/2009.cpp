#include<bits/stdc++.h>
using namespace std;

typedef struct LinkNode {
	int data;
	LinkNode *next;
};

int find_k(LinkNode *L,int k){
	LinkNode *p=L->next,*q=L->next;//指向第一个节点 
	for(int i=0;i<k-1;i++){
		if(q->next==NULL)return 0;
		else q=q->next;//让q节点先往后找到相对位置 
	}
	while(q->next!=NULL){
		q=q->next;
		p=p->next;
	}
	printf("%d",p->data);
	return 1;
	
}

int main(){
	return 0;
}