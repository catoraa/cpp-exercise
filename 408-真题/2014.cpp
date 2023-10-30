#include<stdio.h>
//求WPL
//DFS，二叉树先序遍历

typedef struct TreeNode{
	int weight;
	TreeNode *left,*right;
}TreeNode;

void WPL(TreeNode *T,int level){
	int count=level*(T->weight);
	if(T->left)
	count=count+WPL(T->left,level+1);
	if(T->right)
	count=count+WPL(T->right,level+1);
	return count; 
}

int WPL_root(TreeNode *root){
	return WPL(root,0);
}

int main(){
	return 0;
}