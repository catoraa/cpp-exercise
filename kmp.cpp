#include<iostream>
#include <cstring>
using namespace std;

int nextval(string* a){
    int len=a->length();
    return len;
}

int main(){
    string a;
    cin>>a;
    cout<<nextval(&a);
    return 0;
}