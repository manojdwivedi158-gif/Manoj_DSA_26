#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter the age of ram:";
    cin>>x;
    cout<<"enter the age of shyam:";
    cin>>y;
    cout<<"enter the age of ajay:";
    cin>>z;
    if(x<y){
        if(x<z){
            cout<<"ram is youngest";

        }
        else{
            cout<<"ajay is youngest";
        }

    }

    else{
        if(x>y){
            cout<<"Shyam is youngest";
        }
        else{
            cout<<"ajay is youngest";
    }
}

}