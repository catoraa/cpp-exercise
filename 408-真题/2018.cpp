#include<stdio.h>
#include<cstring>
#include<stdlib.h>

int findMissMin(int a[],int n){
    int i,*tag;
    tag=(int *)malloc(4*n);
    memset(tag,0,4*n);
    for (i = 0; i < n ; i++)
    {
        if(a[i]>0&&a[i]<n)
            tag[a[i]-1]=1;
    }
    for (i = 0; i < n; i++)
    {
        if (tag[i]==0) break;
    }
    return i+1;
    
}

int main(){
    return 0;
}