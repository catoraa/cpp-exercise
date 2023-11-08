#include<bits/stdc++.h>

// 分析：并查集是一种树型的数据结构，用于处理一些不交集的集合。我们可以用它来判断图的连通分量个数。

// 并查集的实现
class UnionFind {
public:
    // 构造函数，初始化并查集
    UnionFind(int n) {
        // 初始化并查集，并将每个元素的根节点设置为自己
        for (int i = 0; i < n; i++) {
            parent.push_back(i);
        }
    }

    // 查找元素 p 的根节点
    int find(int p) {
        // 如果 p 已经是根节点，则直接返回
        if (p == parent[p]) {
            return p;
        }

        // 否则，递归查找 p 的根节点
        return parent[p] = find(parent[p]);
    }

    // 合并元素 p 和 q 的根节点
    void unionElements(int p, int q) {
        // 查找 p 和 q 的根节点
        int pRoot = find(p);
        int qRoot = find(q);

        // 如果 p 和 q 的根节点相同，则不需要合并
        if (pRoot == qRoot) {
            return;
        }

        // 否则，将 p 的根节点设置为 q 的根节点
        parent[pRoot] = qRoot;
    }

private:
    std::vector<int> parent;  // 保存并查集的每个元素的根节点
};

// 图的连通分量个数的函数
int countConnectedComponents(const std::vector<std::vector<int>>& graph) {
    int n = graph.size();  // 图的节点个数

    // 初始化并查集
    UnionFind uf(n);

    // 遍历图的每一条边
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // 如果这条边连接了两个不同的节点，则将这两个节点的根节点合并
            if (graph[i][j] == 1) {
                uf.unionElements(i, j);
            }
        }
    }

    // 遍历并查集，统计并查集中根节点的个数
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (uf.find(i) == i) {
            count++;
        }
    }

    return count;
}

// 测试函数，只包括一个简短的测试用例
bool testCountConnectedComponents() {
    // 创建一个图
    std::vector<std::vector<int>> graph = {{0, 1, 0, 1}, {1, 0, 1, 0}, {0, 1, 0, 1}, {1, 0, 1, 0}};

    // 计算图的连通分量个数
    int count = countConnectedComponents(graph);

    // 检查结果
    if (count!= 2) {
        std::cout << "test failed." << std::endl;
        return false;
    }
    std::cout << "test passed." << std::endl;
    return true;
}
int main(){
    testCountConnectedComponents();
    return 0;
}