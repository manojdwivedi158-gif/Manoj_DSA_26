#include<iostream>
using namespace std;
int main(){
    int n,fac=0;
    cout<<"enter your number";
    cin>>n;
    for(int i=1;i<=n;i++){
        fac+=i;
    }
    cout<<fac;
}
