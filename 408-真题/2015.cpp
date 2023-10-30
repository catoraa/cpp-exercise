#include<stdio.h>

typedef struct LinkNode{
	int data;;
	LinkNode *link;
};

void del(LinkNode *HEAD,int n){
	int *tag;
	LinkNode *p=HEAD,*d;
	tag=(int *)malloc(4*(n+1));
	memset(tag,0,4*(n+1));
	
	while(p->link!=NULL){
		if(tag[abs(p->link->data)]==0){
			p=p->link;
			tag[abs(p->data)]=1;
		}
		else{
			d=p->link;
			p->link=d->link;
			free(d);
		}
	}
	free(tag);
}

int main(){
	return 0;
}
