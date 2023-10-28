#include<stdio.h>

int minSubArrayLen(int target, int* nums, int numsSize){
    int p=0,q=0,sum=nums[0],min=0;
    if(numsSize==0)return 0;
    while (q<numsSize)
    {
        if(sum>=target){
            if(min==0)min=q-p+1;
        else min=min>q-p+1?q-p+1:min;  
         sum=sum-nums[p];
         p++;
        }
       if(sum<target){
        if(q==numsSize - 1)break;
        q++;
        sum=sum+nums[q];
       }
    }
    return min;
}

int minSubArrayLen_official(int s, int *nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }
    int ans = INT_MAX;
    int start = 0, end = 0;
    int sum = 0;
    while (end < numsSize) {
        sum += nums[end];
        while (sum >= s) {
            ans = fmin(ans, end - start + 1);
            sum -= nums[start];
            start++;
        }
        end++;
    }
    return ans == INT_MAX ? 0 : ans;
}//官方题解

int main(){
    int target=7;
    int nums[]={2,3,1,2,4,3};
    int numsSize=sizeof(nums)/4;
    int i=minSubArrayLen(target,nums,numsSize);
    printf("%d",i);
    return 0;
}