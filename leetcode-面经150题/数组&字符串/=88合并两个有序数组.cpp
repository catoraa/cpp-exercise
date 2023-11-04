#include<stdio.h>
#include<string.h>
//三指针法

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int p=m-1,q=n-1,end=m+n-1;
    while (p>=0||q>=0){
        
    }


    {
        /* code */
    }
    
   
        for (int i = m+n-1; i > 1; i--){

        if (q==0||nums1[p]>=nums2[q])nums1[i]=nums1[p],p--;
        if (p==0||nums1[p]<nums2[q])nums1[i]=nums2[q],q--;
      }
    }

    
}

int main(){
    int nums1[]= {1,2,3,0,0,0}, m = 3, nums2[] = {2,5,6}, n = 3;
    merge(nums1,6,3,nums2,3,3);
    return 0;
}