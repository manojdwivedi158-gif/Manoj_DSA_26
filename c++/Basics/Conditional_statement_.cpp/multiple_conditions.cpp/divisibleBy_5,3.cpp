#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter your number";
    cin>>x;
    if(x%5==0 && x%3==0){
        cout<<"divisible by 5,3";
    }
    else{
        cout<<"not ";
    }

}