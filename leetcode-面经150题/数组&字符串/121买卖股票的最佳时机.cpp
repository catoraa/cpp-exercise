#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=-1;//price有可能等于0
        int maxprofit=0;
        int day=prices.size();
        for (int i = 0; i < day; i++)
        {
            if (prices[i]<min||min==-1){
                min=prices[i];
            }
            else {
                int profit = prices[i] - min;
                maxprofit = max(maxprofit, profit);
            }
        }
        return maxprofit;
    }
};

int main(){
    vector<int> prices={2,1,2,1,0,1,2};
    Solution s;
    int maxprofit=s.maxProfit(prices);
    printf("%d",maxprofit);
    return 0;
}