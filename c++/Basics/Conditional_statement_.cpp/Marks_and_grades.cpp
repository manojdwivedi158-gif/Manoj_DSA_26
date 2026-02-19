#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter your marks:";
    cin>>x;
    if(x<100){
    if(x>=80){
        cout<<"very good";
    }
    else if(x>60){
        cout<<"good";
    }
    else if(x>40){
        cout<<"second division";

    }
    else{
        cout<<"fail";
    }


    }
    else{
        cout<<"not";
    }
}