#include<stdio.h>
//寻找共同后缀起始位置
//双指针

typedef struct LinkNode {
	int data;
	LinkNode *next;
}LinkNode;

LinkNode* FindCommon(LinkNode *str1,LinkNode *str2){
    int len1=0,len2=0;
    LinkNode *p=str1,*q=str2;
    while (p->next){   
        len1++;
        p=p->next;
    }

    while (q->next){   
        len2++;
        q=q->next;
    }

    p=str1,q=str2;

    if(len1>=len2)for(int i = 0; i < len1-len2; i++)p=p->next;
    else for (int i = 0; i < len2-len1; i++)q=q->next;
    
    while(p&&q&&p!=q)p=p->next,q=q->next;

    return p;//返回的是一个指针，而不是一个结点
}

int main(){

    return 0;
}