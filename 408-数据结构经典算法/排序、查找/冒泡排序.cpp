#include <stdio.h>
// 冒泡排序
//基于交换
// 时间复杂度O(n^2)
// 空间复杂度O(1)
// 稳定

void bubble_sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) { // 相邻元素比较
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main(){
    return 0;
}