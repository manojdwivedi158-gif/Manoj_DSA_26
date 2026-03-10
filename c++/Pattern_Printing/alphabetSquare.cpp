#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    
        for(int i=1;i<=n;i++){
            for(int m=1;m<=n;m++){
            cout<<char(m+64)<<" ";
            }
            cout<<endl;

        }
        cout<<endl;
    
}