#include<bits/stdc++.h>
using namespace std;
typedef struct LinkNode{
	int data;;
	LinkNode *link;
};

void del(LinkNode *HEAD,int n){
	int *tag;
	LinkNode *p=HEAD,*d;
	tag=(int *)malloc(sizeof(int)*(n+1));
	memset(tag,0,sizeof(int)*(n+1));
	
	while(p->link!=NULL){
		if(tag[abs(p->link->data)]==0){
			p->link;
			tag[abs(p->data)]=1;
		}
		else{
			d=p->link;
			p->link=d->link;
			free(d);
		}
	}
}

int main(){
	return 0;
}
