
//  enter your number:4

//  1 1 1 1 
//  2 2 2
//  3 3
//  4
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}