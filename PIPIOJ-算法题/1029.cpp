#include<iostream>
#include<vector>
#include<string>
using namespace std;

typedef struct student
{
    string id;
    vector<int> t;
}student;



int main(){
    int n,m,g;
    vector<int> score;
    vector<student> stu;
    while (cin>>n>>m>>g)
    {   
        for (int i = 0; i < m; i++)
        {   
            int in;
            cin>>in;
            score.push_back(in);
        }//输入分值
        
        for (int i = 0; i < n; i++)
        {
            student temp=new student;
            cin>>temp.id;
        }
        
    }
    return 0;
}