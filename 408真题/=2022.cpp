#include<stdio.h>
#include<stack>

const int max_size=100;

typedef struct SqBiTree{
    int SqBitNode[max_size];
    int ElemNum;
}SqBiTree;

bool Is_BST(SqBiTree t, int k, int *val) {
    if (k < t.ElemNum && t.SqBitNode[k] != -1) { 
        // 当前节点存在

        if (!Is_BST(t, 2 * k + 1, val))return false;
        // 判断左子树是否为 BST

        if (t.SqBitNode[k] <= *val)return false; 
        // 当前节点的值小于等于前驱节点的值
        *val = t.SqBitNode[k]; 
        // 更新前驱节点的值

        if (!Is_BST(t, 2 * k + 2, val))return false;
        // 判断右子树是否为 BST
        
    }
    return true; // 当前节点为空或者当前子树为 BST
}


int main(){
    return 0;
}