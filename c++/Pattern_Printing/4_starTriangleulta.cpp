
//  enter your number:7
//  7 6 5 4 3 2 1 
//  6 5 4 3 2 1
//  5 4 3 2 1
//  4  3 2 1
//  3 2 1
//  2 1
//  1


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}