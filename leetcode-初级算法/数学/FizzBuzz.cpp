#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> f;
        string a="FizzBuzz";
        string b="Fizz";
        string c="Buzz";
        for (int i = 1; i <= n; i++)
        {   
            int mod3=i%3,mod5=i%5;//减少计算量
            if(mod3==0&&mod5==0)f.push_back(a);
            else if(mod3==0)f.push_back(b);
            else if(mod5==0)f.push_back(c);
            else f.push_back(to_string(i));
        }
        return f;
    }
};

int main(){
    
    return 0;
}