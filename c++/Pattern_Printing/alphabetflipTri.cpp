
//   enter your number : 5

//   A B C D E 
//   A B C D 
//   A B C 
//   A B 
//   A

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }
}