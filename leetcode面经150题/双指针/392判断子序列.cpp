#include<stdio.h>
#include<cstring>


bool isSubsequence(char * s, char * t){
    int lens=strlen(s);
    int lent=strlen(t);
    int a=0;
    for(int b=0;b<lent;b++){
        if (s[a]==t[b])a++;
        if (a==lent){break;return true;}
    }
    return a==lens;
}


int main(){
    char s[] = "abc", t[] = "ahbgdc";
    printf("%d",isSubsequence(s,t));
    return 0;
}