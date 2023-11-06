#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum=0;
        int len=nums.size();
        //异或运算特性：a^a=0
        for (int i = 0; i < len; i++)
        {   
            sum=sum^nums[i];
        }
        return sum;
    }
};
int main(){

    return 0;
}
