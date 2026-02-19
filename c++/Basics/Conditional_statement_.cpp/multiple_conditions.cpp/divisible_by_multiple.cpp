
// divisible by 3,4;
#include<iostream>   
using namespace std;    
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    if(n%3==0 && n%4==0){
        cout<<"divisible from 3,4";
    }
    else{
        cout<<"not";
    }
}
