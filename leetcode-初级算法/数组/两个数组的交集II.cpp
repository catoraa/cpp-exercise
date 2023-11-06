#include<bits/stdc++.h>
using namespace std;

//采用哈希表+栈的思想
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> tag;
        vector<int> output;
        int len1=nums1.size(),len2=nums2.size();
        for (int i = 0; i < len1; i++)
        {
            auto it=tag.find(nums1[i]);
            if(it==tag.end())tag[nums1[i]]=1;
            else tag[nums1[i]]++;
        }
        for (int i = 0; i < len2; i++)
        {
            auto it=tag.find(nums2[i]);
            if(it==tag.end() && tag[nums2[i]]>=0){
                tag[nums2[i]]--;
                output.push_back(nums2[i]);
            }
        }
        return output;
    }
};

int main(){

    return 0;
}