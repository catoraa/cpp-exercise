#include<bits/stdc++.h>
using namespace std;

typedef struct BitTree{
	int weight;
	BitTree *left,*right;
};

void weight_sum(BitTree *root,int level){
	int left=0,right=0;
	if(root->left==NULL&&root->right==NULL)
	return level*root->weight;
	if(root->left!=NULL)
	left=weight_sum(root->left,level+1);
	if(root->right!=NULL)
	right=weight_sum(root->right,level+1);
	return left+right; 
}

int main(){
	return 0;
}