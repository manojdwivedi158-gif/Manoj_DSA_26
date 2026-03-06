#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"enter your number:";
    cin>>n;
    while(n!=0){
       
        n=n/10;
        if(n%2!=0){
        sum+=n;

        }
    }
    cout<<sum;
}