#include<bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(int* nums, int numsSize, int k){
    int p=0,q=p+k;
    int tag[numsSize];
    memset(tag,0,numsSize*4);
    
    while (q!=numsSize)
    {
       if(nums[p]==nums[q])return true;
       p++,q++;
    }
    return false;
}

int main(){

    return 0;
}