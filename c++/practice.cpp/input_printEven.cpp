#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter your starting no.";
    cin>>x;
    cout<<"enter your ending point.";
    cin>>y;
    for(x=x;x<=y;x++){
        if(x%2==0){
            cout<<x<<" is even no."<<endl;
        }
        else{
            cout<<" "<<endl;
        }
    }
}