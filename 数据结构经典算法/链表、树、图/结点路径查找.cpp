#include<stdio.h>

struct TreeNode
{
    int data;
    TreeNode *left,*right;
};

int findtrack(TreeNode *T,TreeNode *N){
    if (!T)return 0;
    
    else if (T==N){
        printf("%d",T->data);
        return 1;
    }

    else if (findtrack(T->left,N)||findtrack(T->right,N)){
        printf("%d",T->data);
        return 1;
    }

    return 0;
}

int main(){
    return 0;
}