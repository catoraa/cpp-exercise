#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=(n+1)*n/2;
        for (int i = 0; i < n; i++)
        {
            sum=sum-nums[i];
        }
        return sum;
    }
};

int main(){

    return 0;
}