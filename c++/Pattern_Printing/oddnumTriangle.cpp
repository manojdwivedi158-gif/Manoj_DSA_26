

//  enter your number:6

//  1 3 5 7 9 11 
//  1 3 5 7 9
//  1 3 5 7
//  1 3 5
//  1 3
//  1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j*2-1<<" ";
        }
        cout<<endl;
    }
}