#include<stdio.h>
//思想 摩尔投票法
int majorityElement(int* nums, int numsSize){
    int count=1,bignum=nums[0];
    for (int i = 1; i < numsSize; i++)
    {   
        if (nums[i]==bignum)count++;
        else if (count==0){
            bignum=nums[i];
            count++;
        }
        else count--;
    }
    return bignum;
}

int main(){
    int a[]={2,2,1,1,1,2,2};
    int big=majorityElement(a,sizeof(a)/4);//一个int是4B
    printf("%d\n",big);
    //测试案例
    return 0;
}