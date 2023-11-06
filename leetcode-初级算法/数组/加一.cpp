#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len=digits.size(),carry=0;
        reverse(digits.begin(),digits.end());
        digits[0]=digits[0]++;
        if(digits[0]>9)carry=1,digits[0]=digits[0]-10;
        else carry=0;
        for (int i = 0; i < len; i++)
        {
            if(i==0)digits[i]++;
            digits[i]=digits[i]+carry;
            carry=0;
            if(digits[i]>9)carry=1,digits[i]=digits[i]-10;
            if (i==len-1&&carry==1)digits.push_back(1);
        }
        reverse(digits.begin(),digits.end());
        return digits;
    }
};

int main(){

    return 0;
}