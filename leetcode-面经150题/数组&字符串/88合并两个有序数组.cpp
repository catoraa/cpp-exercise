#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p=m-1,q=n-1,merge=m+n-1;
        while (q>=0)
        {
            if(p>=0&&nums1[p]>=nums2[q]){
                nums1[merge]=nums1[p];
                p--;
            }
            else{
                nums1[merge]=nums2[q];
                q--;
            }
            merge--;
        }
    }
};

int main(){
    vector<int> nums1= {1,2,3,0,0,0};
    vector<int> nums2= {2,5,6};
    Solution s;//必须创建solution类的一个实例
    s.merge(nums1,3,nums2,3);//才能调用merge函数
    int len=nums1.size();
    for (int i = 0; i < len; i++)
    {
        cout<<nums1[i]<<' ';
    }
    
    return 0;
}
