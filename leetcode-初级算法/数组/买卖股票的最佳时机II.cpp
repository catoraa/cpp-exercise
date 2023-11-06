#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len=prices.size();
        int profit=0;
        for (int i = 1; i < len; i++)
        {
            if(prices[i-1]<prices[i])
            profit=profit+prices[i]-prices[i-1];
        }
        return profit;
    }
};

int main(){

    return 0;
}