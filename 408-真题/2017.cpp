#include<stdio.h>

typedef struct TreeNode {
	int data;
	TreeNode *left,*right;
}TreeNode;

void cover(TreeNode *T,int level){
    if (T->left)
    {
        if (level>0)printf("(");
        cover(T->left,level+1);
    }

    printf("%d",T->data);

    if (T->right)
    {
        if (level>0)printf(")");
        cover(T->right,level+1);
    }
}

void treetomid(TreeNode *T){
    cover(T,0);
}

int main(){

    return 0;
}