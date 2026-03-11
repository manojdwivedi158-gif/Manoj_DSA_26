


//  enter your number:5
//  A A A A A 
//  B B B B
//  C C C
//  D D
//  E


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<char(i+64)<<" ";
        }
        cout<<endl;
    }
}