#include<stdio.h>
// 二分查找
// 时间复杂度O(logn)
// 空间复杂度O(1)

int binary_search(int *a,int n,int k){
    int low=0,high=n-1;
    while (low<high)
    {
        int mid=low+(high-low)/2;//避免溢出
        if(a[mid]==k) return mid;
        else if (a[mid]>k)high=mid-1;//缩小范围到右半侧
        else low=mid+1;//缩小范围到左半侧
    }
    return -1;//没有找到，返回-1
}

int main(){
    return 0;
}