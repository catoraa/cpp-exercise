#include<stdio.h>

void reverse1(int a[],int l,int r){
	for(int i=0;i<(r-l+1)/2;i++){
		swap(l+i,r-i);
	}
}

void left_shift(int a[],int p,int n){
	reverse1(a,0,p-1);
	reverse1(a,p,n-1);
	reverse1(a,0,n-1);
}

int main(){
	return 0;
}