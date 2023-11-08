#include<stdio.h>
#define size 100
int UFStes[size];

void initial(int s[]){
    for (int i = 0; i < size; i++)
    {
        s[i]=-1;
    }
}

int Find(int s[],int x){
    while (s[x]>0)
        x=s[x];
    return x;
    
}

void Union(int s[],int root1,int root2){
    s[root2]=root1;
}

int main(){
    return 0;
}