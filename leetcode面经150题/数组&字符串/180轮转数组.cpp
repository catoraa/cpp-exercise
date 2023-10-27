#include<stdio.h>
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void rotate(int* nums, int numsSize, int k){
    int count=0,i=0;
    int temp;
    while (count<k)
    {   
        int temp=nums[i];
        if (i+k>=numsSize){
            nums[i]=nums[i+k-numsSize];
            nums[i+k]=temp;
            i=i+k-numsSize;
        } 
        else {
            nums[i]=nums[i+k];
            nums[i+k]=temp;
            i=
        }
        count++;
    }
}

int main(){
    int a[]={1,2,3,4,5,6,7};
    int len=sizeof(a)/4;
    int k=3;
    rotate(a,len,k);//一个int是4B
    for (int i = 0; i < len ; i++)printf("%d ",a[i]);
    //测试案例
    return 0;
}