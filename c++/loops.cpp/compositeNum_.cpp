#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number";
    cin>>n;
    for(int i=21;i<n;i++){
        if(n%i==0)
        cout<<i<<endl;
        cout<<"composite number ";
    }
    
}