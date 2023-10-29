#include<stdio.h>

int find_mid(int s1[],int s2[],int L){
	int a=0,b=0,max=0;
	for(int i=1;i<L;i++){
		if(s1[a]>=s2[b]){
			max=1;
			b++;
		}
		
		else {
			a++;
			max=2;
		}
	}
	if(max==1)return s1[a];
	else return s2[b];
}


int main(){
	return 0;
}