#include<bits/stdc++.h>
//废案，需要重写。实际实现的是dfs，bfs要使用队列。
int mov[2][4]={{0,0,-1,1},{1,-1,0,0}};//上下左右,移动状态数组

int bfs(char** maze, int x, int y, int xin, int yin,int **vis,int count){
    if (xin==0||yin==0||xin==x-1||yin==y-1)return count;
    for (int i = 0; i < 4; i++)
    {   
        int newx=xin+mov[0][i];
        int newy=yin+mov[1][i];
        if (newx>-1&&newy>-1&&maze[newx][newy]=='.'&&!vis[newx][newy])
        {   
            count++;
            vis[newx][newy]=1;
            int result=bfs(maze,x,y,newx,newy,vis,count);
            if (result!=-1)return result;
        }
    }
    return -1;
}

int nearestExit(char** maze, int mazeSize, int* mazeColSize, int* entrance, int entranceSize){
    int x=mazeSize,y=*mazeColSize;
    int xin=entrance[0],yin=entrance[1];
    int **vis = (int **)malloc(x * sizeof(int *));

    for (int i = 0; i < x; i++) {
        vis[i] = (int *)malloc(y * sizeof(int));
        memset(vis[i], 0, y * sizeof(int));
    }//建立vis已访问结点标记数组

    int count=0;
    vis[xin][yin]=1;

    return bfs(maze,x,y,xin,yin,vis,count);
}

int main(){

    return 0;
}