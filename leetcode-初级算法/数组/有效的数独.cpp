#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<pair<int,int>,int> tag;
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; i++)
            {   
                if(board[i][j]=='.')tag[make_pair(i,j)]=-1;
                else tag[make_pair(i,j)]
            }
            
        }
        
    }
};

int main(){

    return 0;
}