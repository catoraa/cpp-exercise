#include<stdio.h>
#include<stdlib.h>
#include<cstring>

bool canConstruct(char * ransomNote, char * magazine){
    int tag[26]={0};
    int n=strlen(ransomNote),m=strlen(magazine);
    //数组长度要先算出来，不能在for循环中反复算，会极大减慢速度
    for (int i = 0; i < n; i++)tag[ransomNote[i]-97]++;
    for (int i = 0; i < m; i++)tag[magazine[i]-97]--;
    for (int i = 0; i < 26; i++){
        if(tag[i]>0)return false;
    }
    return true;
}

int main(){
    char a[]="aa";
    char b[]="aab";
    int i=canConstruct(a,b);
    if (i==1)printf("true");
    else printf("false");
    
    return 0;
}