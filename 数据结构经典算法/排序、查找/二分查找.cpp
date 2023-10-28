#include<stdio.h>

int binary_search(int *a,int n,int k){
    int low=0,high=n-1;
    while (low<high)
    {
        int mid=(low+high)/2;
        if(a[mid]==k) return mid;
        else if (a[mid]>k)high=mid-1;
        else low=mid+1;
    }
    return -1;

}

int main(){
    return 0;
}