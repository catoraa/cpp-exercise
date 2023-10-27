#include<stdio.h>

int removeDuplicates(int* nums, int numsSize){
    int back=0,count=1;
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i]==nums[i-1])
        {
            count++;
            if (count>2)back++;
            nums[i-back]=nums[i];//后移，覆盖前面去重
        }
        else {
            count=1;
            nums[i-back]=nums[i];//后移，覆盖前面去重
        }
    }
    return numsSize-back;
}

int main(){
    int a[]={1,1,1,2,2,3};
    int len=removeDuplicates(a,sizeof(a)/4);//一个int是4B
    printf("%d\n",len);
    for (int i = 0; i < len; i++)printf("%d ",a[i]);
    //测试案例
    return 0;
}