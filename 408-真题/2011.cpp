#include<stdio.h>
//找出中位数
//双指针
int find_mid(int *s1,int *s2,int L){
	int a=0,b=0,min=0;
	for(int i=0;i<L;i++){
		if(s1[a]>=s2[b]){
			b++;//永远指向下一个位置
			min=2;
		}
		else {
			a++;//永远指向下一个位置
			min=1;
		}
	}
	if(min==1)return s1[a-1];
	else return s2[b-1];
}


int main(){
	int a[]={11,13,15,17,19};
	int b[]={2,4,6,8,20};
	int L=sizeof(a)/4;
	//printf("%d",L);
	printf("%d",find_mid(a,b,L));
	return 0;
}