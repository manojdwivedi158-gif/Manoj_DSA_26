#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter your first no.";
    cin>>x;
    cout<<"enter your no. of terms";
    cin>>y;
    cout<<"enter your jump";
    cin>>z;
    for(int i=x;i<=x+(z-1)*z;i++){
        cout<<i<<endl;
    }
}