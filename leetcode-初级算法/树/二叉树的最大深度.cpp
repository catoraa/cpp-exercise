#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
 };

int maxDepth(struct TreeNode* root) {
    if(root)return fmax(maxDepth(root->left), maxDepth(root->right)) + 1;
    else return 0;
}

int main(){
    return 0;
}