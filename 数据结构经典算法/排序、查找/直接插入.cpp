#include<stdio.h>
//直接插入排序 
//基于插入
//时间复杂度O(n^2)
//空间复杂度O(1)
//稳定

void insert_sort(int a[],int n){
	int i,j;
	for(i=0;i<=n;i++){
		if(a[i]<a[i-1]){    //是否需要调位 
			a[0]=a[i];      //复制[哨兵] 
		    for(j=i-1;a[0]<a[j];--j)//查找插入位置 
			    a[j+1]=a[j];//边查边挪 
		    a[j+1]=a[0];    //复制到位
		}
	}
}

int main(){

    return 0;
}