#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int low,int high){
	int pivot=a[low];
	while(low<high){
		while(low<high&&a[low]<=pivot)low++;
		a[high]=a[low];
		while(low<high&&a[high]>=pivot)high++;
		a[low]=a[high];
	}
	a[low]=pivot;
	return low;
}

void quicksort(int a[],int l, int r){
	if(l<r){
		int pivotpos=partition(a,l,r);
		quicksort(a,l,pivotpos-1);
		quicksort(a,pivotpos+1,r);
	}
	
}

void findmain(int a[],int n){
	quicksort(a,0,n-1);
	int mid=n/2;
	if(a[mid]==a[mid+n/4]&&a[mid]==a[mid-n/4])return a[mid];
	else return -1;
}

int main(){
	return 0;
}