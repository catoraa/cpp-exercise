#include<iostream>
using namespace std;
const int max_size=100;

typedef struct
{
    int SqBitNode[max_size];
    int ElemNum;
}SqBiTree;

bool Is_BST(SqBiTree T){
    for(int i=0;i<T.ElemNum;i++){
        if(T.SqBitNode[i]!=-1){//规避空节点
            if(2*i+1<T.ElemNum && T.SqBitNode[i]<T.SqBitNode[2*i+1]&&T.SqBitNode[i]<T.SqBitNode[2*i+1])return false;
            //存在左孩子结点，且左孩子比父节点大，判false
            if(2*i+2<T.ElemNum && T.SqBitNode[i+1]<T.SqBitNode[2*i+2]) return false;
            //存在右孩子结点，且右孩子比父节点小，判false
        }
    }
    return true;//检测无误，判true
}
int main(){
    return 0;
}