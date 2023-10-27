#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int count=0,p=0,q=0;
        int len=nums.size();
        while (count<len)
        {
            q=((q+k)%len);
            swap(nums[p],nums[q]);
            count++;
        }
        
    }
};

int main(){
    vector<int>a={1,2,3,4,5,6,7};
    int k=3;
    Solution s;
    s.rotate(a,k);
    for (int i = 0; i < a.size() ; i++)printf("%d ",a[i]);
    //测试案例
    return 0;
}