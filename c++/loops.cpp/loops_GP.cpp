
//  GP  geometric progression:

#include<iostream>
using namespace std;  
int main(){
    int n,m=1;
    cout<<"enter your no. of  terms";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<m<<endl;
        m=m*2;
    }
}