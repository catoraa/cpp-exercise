#include<stdio.h>
//找出主元素
//摩尔投票法
//简单

int findmain(int *a，int len){
    int main=a[0],count=1,sum=0;
    for (int i = 1; i < len; i++)
    {   
        if (a[i]==main)count++,sum++;//元素相同，“加强”
        else count--;//元素不同，“对冲”
        if(count==0)main=a[i],sum=0;//换元素，个数计数归零
    }
    if(sum>len/2)return main;
    else return -1;
}

int main(){

    return 0;
}