#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

vector<int> v;

void midvisit(TreeNode *T){
    if(T->left)midvisit(T->left);
    v.push_back(T->val);
    if(T->right)midvisit(T->right);
}
//二分查找变种
class Solution {
public:
    int firstBadVersion(int n) {
        int low=1,high=n,mid;
        while(low<high){
            mid=low+(high-low)/2;
            if(isBadVersion(mid))high=mid;//说明错误版本在左半区间
            else low=mid+1;//说明错误版本在右半区间
        }
        return low;
    }
};

int main(){

    return 0;
}
