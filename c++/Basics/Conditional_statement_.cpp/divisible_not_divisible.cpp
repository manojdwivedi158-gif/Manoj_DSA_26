#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter your no.";
    cin>>x;
    if((x%3==0 || x%5==0) and (x%15!=0)){
        cout<<"valid";

    }
    else{
        cout<<"not";
    }
}