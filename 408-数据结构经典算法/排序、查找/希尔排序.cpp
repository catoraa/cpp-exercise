#include<stdio.h>
//希尔排序
//基于插入
//时间复杂度O(nlog2(n))
//空间复杂度O(1)
//不稳定

void shellsort(int arr[], int n) {
    int gap=n/2;//间隔值
    while (gap > 0) {
        for (int i = gap; i < n; i++) {
            int key = arr[i];
            int j = i;
            while (j >= gap && arr[j - gap] > key) {
                arr[j] = arr[j - gap];
                j -= gap;
            }// 将比关键元素大的元素向后移动
            arr[j] = key;// 将关键元素插入到正确的位置
        }
        gap /= 2;//减小间隔值
    }
}

int main(){

    return 0;
}