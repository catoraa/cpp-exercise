#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        while (n > 1) {  
        if (n % 3!= 0) {  
            return false;  
        }  
        n = n / 3;  
    }  
    return n == 1; 

    }
};

int main(){

    return 0;
}