#include<iostream>
using namespace std;
const int MAXV=100;

typedef struct{
    int numVertices,numEdge;
    char VerticesList[MAXV];
    int Edge[MAXV][MAXV];
}MGraph;//实现邻接表

int printVertices(MGraph G){
    int K=0,in,out;
    for(int i=0;i<G.numVertices;i++){
        in=0,out=0;//入度和出度的计数置零
        for(int j=0;j<G.numEdge;j++){
            out=out+G.Edge[i][j];//出度为i行所有元素之和
            in=in+G.Edge[j][i];//入度为i列所有元素之和
        }
        if(out>in){
            printf("%c",G.VerticesList[i]);
            K++;
        }
    }
       return K;
}

int main(){
    return 0;
}