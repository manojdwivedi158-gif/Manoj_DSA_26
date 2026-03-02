#include<iostream>
using namespace std;
int main(){
    int n,f;
    cout<<"enter your number to print factor:";
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
        f=i;
        }
    }
    cout<<f<<" ";
}





































