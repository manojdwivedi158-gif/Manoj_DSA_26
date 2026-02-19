#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter your no.";
    cin>>x;
    cout<<"enter no.";
    cin>>y;
    cout<<"enter another no.";
    cin>>z;
    if(x>y){
        if(x>z){
            cout<<x<<"is greatest";
        }
        else{
            cout<<z<<"is greatest";
        }

    }
    else{
        if(y>x){
            cout<<y<<" is greatest";
        }
            else{
                cout<<z<<"is greatest";
            }
        }
    }

    


