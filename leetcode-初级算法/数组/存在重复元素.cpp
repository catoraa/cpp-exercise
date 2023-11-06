#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;//使用unordered_map方法
        int len=nums.size();
        for (int i = 0; i < len; i++)
        {
            auto it=hash.find(nums[i]);//迭代器方式查找
            if(it==hash.end())hash[nums[i]]=1;//初次访问标记
            else return true;//出现重复元素
        }
        return false;//未查找到重复
    }
};

int main(){

    return 0;
}