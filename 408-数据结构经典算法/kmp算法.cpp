#include <bits/stdc++.h>
using namespace std;

// 计算模式串b的next数组
void getNext(string b, int next[]) {
    int m = b.size(); // 模式串长度
    next[0] = 0; // 将next数组的初始值修改为0和1
    next[1] = 1;
    int k = 1;
    for (int j = 2; j < m; ++j) {
        while (k > 0 && b[j - 1] != b[k - 1]) { // 递归计算next数组
            k = next[k];
        }
        if (b[j - 1] == b[k - 1]) {
            k++;
        }
        next[j] = k;
    }
}

// KMP算法匹配
void kmp(string a, string b) {
    int n = a.size(); // 文本串长度
    int m = b.size(); // 模式串长度
    int i = 0, j = 0;
    int* next = new int[m];
    getNext(b, next); // 获取模式串的next数组
    while (i < n && j < m) {
        if (j == 0 || a[i] == b[j]) { // 如果j=0，或者当前字符匹配
            i++;
            j++;
        } else {
            j = next[j]; // 否则根据next数组移动模式串
        }
    }
    if (j == m) { // 如果匹配成功
        cout << "在位置 " << i - j << " 处匹配" << endl;
    } else {
        cout << "未找到匹配" << endl; // 否则未找到匹配
    }
    delete[] next; // 释放内存
}

int main() {
    string a = "abaabaabcabaabc";
    string b = "abaabc";
    kmp(a, b); // 调用kmp函数进行匹配
    return 0;
}
