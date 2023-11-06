#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len=nums.size(),count=0;
        for (int i = 0; i < len; i++)
        {
            if(nums[i]!=0)nums[count]=nums[i],count++;
            
        }
        for (int i = count; i < len; i++)
        {
            nums[i]=0;
        }
    }
};

int main(){

    return 0;
}