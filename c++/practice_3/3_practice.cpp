
//  enter your number:5

//  1 
//  3 5
//  7 9 11
//  13 15 17 19
//  21 23 25 27 29



#include<iostream>
using namespace std;
int main(){
    int n,a=1;
    cout<<"enter your number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a+=2;
        }
        cout<<endl;
    }
}