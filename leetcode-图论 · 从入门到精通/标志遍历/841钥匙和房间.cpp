#include<stdio.h>

int num;  // 全局变量，用于计数已经访问过的房间数量

void dfs(int** rooms, int* roomsColSize, int* visited, int x) {
    visited[x] = 1;  // 标记当前房间为已访问
    num++;  // 计数器加一，表示访问了一个房间

    for (int i = 0; i < roomsColSize[x]; i++) {  // 遍历当前房间连接的其他房间
        if (!visited[rooms[x][i]])  // 如果某个相邻房间未被访问过
            dfs(rooms, roomsColSize, visited, rooms[x][i]);  // 递归调用继续访问该房间
    }
}

bool canVisitAllRooms(int** rooms, int roomsSize, int* roomsColSize) {
    int visited[roomsSize];  // 创建并初始化长度为 roomsSize 的 visited 数组
    for (int i = 0; i < roomsSize; i++)
        visited[i] = 0;  // 将所有房间标记为未访问状态
    num = 0;  // 初始化 num 为 0

    dfs(rooms, roomsColSize, visited, 0);  // 从第一个房间开始进行深度优先搜索

    return num == roomsSize;  // 判断是否访问了所有的房间，如果是则返回 true，否则返回 false
}

int main(){

    return 0;
}