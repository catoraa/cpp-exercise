#include<stdio.h>

const int MAXV=100;

typedef struct{
    int numVertices,numEdge;
    char VerticesList[MAXV];
    int Edge[MAXV][MAXV];
}MGraph;//实现邻接表

int printVertices(MGraph G){
    int count=0;
    for(int i=0;i<G.numVertices;i++){
        int in=0,out=0;//入度、出度的计数置零
        for(int j=0;j<G.numEdge;j++){
            out=out+G.Edge[i][j];//出度为i行所有元素之和
            in=in+G.Edge[j][i];//入度为i列所有元素之和
        }
        if(out>in)count++;//记录K元素个数
    }
    return count;
}

int main(){
    return 0;
}