#include<stdio.h>

void dfs(int **isConnected,int i,int *visited,int isConnectedSize){
    for (int j = 0; j < isConnectedSize; j++){
        if (isConnected[i][j]==1&&!visited[j]){
            visited[j]=1;
            dfs(isConnected,j,visited,isConnectedSize);
        }
    }
}

int findCircleNum(int** isConnected, int isConnectedSize, int* isConnectedColSize){
    int visited[isConnectedSize];
    for (int i = 0; i < isConnectedSize; i++)visited[i]=0;
    int count=0;//相当于memset(isConnectedSize, 0, sizeo,(isConnectedSize));
    for (int i = 0; i < isConnectedSize; i++)
    {
        if (!visited[i]){
            count++;//标记已经访问
            dfs(isConnected,i,visited,isConnectedSize);
        }
    }
    return count;
}

int main(){
    //不会写案例！！
    return 0;
}