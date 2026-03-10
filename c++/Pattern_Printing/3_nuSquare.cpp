

//  enter your number of rows :  5

//  5 4 3 2 1 
//  4 3 2 1
//  3 2 1
//  2 1
//  1



#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter your number of rows:";
    cin>>n;
     
   
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}