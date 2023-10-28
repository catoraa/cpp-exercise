#include<stdio.h>

const int MAXV=100;

typedef struct{
	int numVertices,numEdge;
	char VerticesList[MAXV];
	int Edge[MAXV][MAXV];
}MGraph;

int IsExistEL(MGraph G){
	int count=0;
	for(int i=0;i<G.numVertices;i++){
		int sum=0;
		for(int j=0;j<G.numVertices;j++){
			sum=sum+G.Edge[i][j];
		}
		if(sum%2!=0)count++;
	}
	if(count<=2&&count%2==0)return 1;
	else return 0;
}

int main(){
	return 0;
}