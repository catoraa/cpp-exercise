#include<iostream>
#include<thread>
using namespace std;

void work1(){
    cout<<"hello"<<std::endl;
}

void work2(){
    cout<<"world"<<std::endl;
}

int main(){

    thread worker(work,10);

    return 0;
}