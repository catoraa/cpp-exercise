#include<stdio.h>
//数组循环左移
//逆置算法
void reverse(int a[],int l,int r){
	for(int i=0;i<(r-l+1)/2;i++){
		swap(l+i,r-i);
	}
}

void left_shift(int a[],int p,int n){
	reverse(a,0,p-1);
	reverse(a,p,n-1);
	reverse(a,0,n-1);
}

int main(){
	return 0;
}