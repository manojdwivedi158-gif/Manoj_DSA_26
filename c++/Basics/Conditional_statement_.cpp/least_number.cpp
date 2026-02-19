#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter your 1st number:";
    cin>>x;
    cout<<"enter your 2nd number";
    cin>>y;
    cout<<"enter your 3rd number";
    cin>>z;
    if(x==y && x==z){
        cout<<"all are equal";

    }
    else if(x<=y && x<=z){
        cout<<"x is least number.";
    }
    else if(y<=z && y<=x){
        cout<<"y is least no.";
    }
    else{
        cout<<"z is least";
    }
}