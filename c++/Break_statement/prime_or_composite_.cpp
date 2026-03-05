#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your no.";
    cin>>n;
    bool flag=true;
    for(int i=2;i<=n/2;i++){
        if (n%i==0)
        flag=false;

        break;
        
    }
    if(flag==false) cout<<"composite";
    else if(n==1) cout<<"it is 1 no.";
    else{
        cout<<"prime";
    }
}