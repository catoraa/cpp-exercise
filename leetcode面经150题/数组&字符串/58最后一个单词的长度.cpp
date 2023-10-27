#include<stdio.h>
#include<cstring>

int lengthOfLastWord(char * s){
    int len=strlen(s);
    int l,r=len-1;
    while (s[r]==' ')r--;
    l=r;
    while (l-1>=0&&s[l-1]!=' ')l--;
    return r-l+1;
}//使用了双指针法，但是这样是没必要的

int lengthOfLastWord_otherpeople(char * s){
    int n = strlen(s);
    int num = 0;
    for(int i = n-1;i>=0;i--)
    {
        if(s[i] != ' ')
        num++;
        if(s[i] == ' ' && num >0)
        break;
    }
    return num;
}//别人写的，不用双指针，直接用一个num替代，更简洁

int main(){
    char s[]="Hello World";
    printf("%d",lengthOfLastWord(s));
    return 0;
}