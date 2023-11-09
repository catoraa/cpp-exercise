#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size=matrix.size();
        for (int i = 1; i < size; i++)
        {
            for (int j = 0; j < i; j++)
            {
                swap(matrix[i].data()[j],matrix[j].data()[i]);
            }
        }//主对角线翻转
        int range=size/2;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < range; j++)
            {
                swap(matrix[i].data()[j],matrix[i].data()[size-1-j]);
            }
        }//横向翻转
    }
};

int main(){

    return 0;
}