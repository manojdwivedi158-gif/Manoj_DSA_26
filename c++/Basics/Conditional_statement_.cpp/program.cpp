#include<iostream>
using namespace std;
int main(){
    int a,c;
    char b;
    cout<<"enter your num1 :";
    cin>>a;
    cout<<"enter your operator to perform :";
    cin>>b;
    cout<<"enter your num3 :";
    cin>>c;
    if (b == '+')
        cout<<a+c;
    
    else if(b== '-')
        cout<<a-c;
    
    else if(b == '*') 
        cout<<a*b;
    else{
        cout<<a/c;
    }
    cout<<endl;
}