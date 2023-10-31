#include<stdio.h>
// 直接选择排序
// 时间复杂度O(n^2)
// 空间复杂度O(1)
// 不稳定

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i; // 假设当前索引为最小元素的索引

        // 在未排序序列中找到最小元素的索引
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // 将最小元素与当前元素交换位置
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main(){

    return 0;
}