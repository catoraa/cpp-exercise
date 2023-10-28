#include<bits/stdc++.h>
using namespace std;

//直接插入排序 
void inser_tsort(int a[],int n){
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

//折半插入排序

void half_ins_sort(int a[],int n){
	int 
}



//数组输出 
void arrayout(int a[],int n){
	for(int i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	
	//测试案例1
	int a[8]={49,38,65,97,76,13,27,49};
	int n=8;
	insertsort(a,n);
	arrayout(a,n);
	
	
	return 0;
}