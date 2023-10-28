#include<stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int p=0,q=0;
    int merge[m+n];
    for (int i = 0; i < m+n; i++)
    {
        if(p>=m)merge[i]=nums2[n];
        else if(q>=n)merge[i]=nums1[m];
        else merge[i]=nums1[m]>nums2[n]?nums1[m]:nums2[n];
        m++;
        n++;
    }
    for (int i = 0; i < m+n; i++)nums1[i]=merge[i];
}

int main(){
    int nums1[]= {1,2,3,0,0,0}, m = 3, nums2[] = {2,5,6}, n = 3;
    merge(nums1,6,3,nums2,3,3);
    for (int i = 0; i < m+n; i++)printf("%d ",nums1[i]);
    return 0;
}