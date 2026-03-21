#include<iostream>
using namespace std;

int sum(int a,int b){
    cout<<a+b;
    return 0;
}

int main(){
    int a;
    cout<<"enter your number";
    cin>>a;
    int b;
    cout<<"enter ypur second number:";
    cin>>b;
    cout<<" the sum of two numbers:";sum(a,b);
}