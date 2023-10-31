#include<stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

struct TreeNode {
      int data;
      TreeNode *left,*right;
};

int deep(TreeNode* T){
    if(!T)return 0;
    int leftlevel=deep(T->left);
    int rightlevel=deep(T->right);
    return 1+(leftlevel>rightlevel?leftlevel:rightlevel);
}

int main(){
    return 0;
}