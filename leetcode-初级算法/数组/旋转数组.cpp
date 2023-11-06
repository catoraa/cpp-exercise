#include<bits/stdc++.h>

void swap(int *l,int *r){
    int temp=*l;
    *l=*r;
    *r=temp;
}//函数内的数值对换不能作用于函数外，因此需要采用指针调换

void reverse(int* nums,int l,int r){
    for (int i = 0; i < (r-l+1)/2; i++)swap(&nums[l+i],&nums[r-i]);
}//配合swap指针对换，采用地址传参

void rotate(int* nums, int numsSize, int k) {
    k%=numsSize;//精髓，通过取模避免数组访问越界
    reverse(nums,0,numsSize-k-1);
    reverse(nums,numsSize-k,numsSize-1);
    reverse(nums,0,numsSize-1);
}

int main(){
    int a[7]={1,2,3,4,5,6,7};
    int k=3;
    rotate(a,7,k);
    for (int i = 0; i < 7; i++)
    {
        printf("%d",a[i]);
    }
    
    return 0;
}