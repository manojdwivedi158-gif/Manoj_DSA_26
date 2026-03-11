
//  enter your number : 4
 
//  4 
//  4 3
//  4 3 2
//  4 3 2 1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=n;j>=i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}