#include<stdio.h>

int removeElement(int* nums, int numsSize, int val){
    int back=0;
    for (int i = 0; i < numsSize; i++)
    {
        if(nums[i]==val)back++;
        else nums[i-back]=nums[i];
    }
    return numsSize-back;
}


int main(){
    int a[]={0,1,2,2,3,0,4,2};
    int numsSize=sizeof(a)/4;
    int val=2;
    int len=removeElement(a,numsSize,val);//一个int是4B
    printf("%d\n",len);
    for (int i = 0; i < len; i++)printf("%d ",a[i]);
    //测试案例
    return 0;
}