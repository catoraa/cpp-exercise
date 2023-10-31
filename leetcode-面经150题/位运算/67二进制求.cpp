#include<bits/stdc++.h>
using namespace std;

char * addBinary(char * a, char * b){
    if (strcmp(a,0))return b;
    if (strcmp(b,0)) return a;

    int len=strlen(a)+strlen(b);
    char* sum=(char*)malloc(len+1);
    memset(sum,0,len);
    int carry=0;
    int i=strlen(a)-1,j=strlen(b)-1,k=len-1;





    return sum;
}

int main(){

    return 0;
}