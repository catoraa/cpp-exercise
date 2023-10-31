#include<stdio.h>
// 快速排序
// 时间复杂度O(nlogn) - 平均情况和最好情况，O(n^2) - 最坏情况（当数组已经有序时）
// 空间复杂度O(logn) - 平均情况和最好情况，O(n) - 最坏情况
// 不稳定

int partition(int a[],int low,int high){
	int pivot=a[low];
	while(low<high){
		while(low<high&&a[high]>=pivot) high--;
		a[low]=a[high];
		while(low<high&&a[low]<=pivot) low++;
		a[high]=a[low];
	}
	a[low]=pivot;
	return low;
}

void quicksort(int a[],int low,int high){
	if(low<high){
		int pivotpos=partition(a,low,high);
		quicksort(a,low,pivotpos-1);
		quicksort(a,pivotpos+1,high);
	}
}

int main(){
	int a[15]={18,6,7,8,8,11,8,4,10,0,2,45,4,6,23};
	cout<<"����ǰ:\n";
	for(int i=0;i<15;i++){
		cout<<a[i]<<" ";
	}
	printf("\n");
	quicksort(a,0,15);
	cout<<"�����:\n";
	for(int i=0;i<15;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}