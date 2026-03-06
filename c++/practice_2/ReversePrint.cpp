#include<iostream>
using namespace std;
int main(){
    int n,r=0,ld;
    cout<<"enter your number:";
    cin>>n;

    while(n!=0){
        ld=n%10;
        r *= 10;
        r += ld;
        n /= 10;
        


    }
    cout<<r;
}