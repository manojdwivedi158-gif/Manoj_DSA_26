#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter your cost prise:";
    cin>>x;
    cout<<"enter your selling prise:";
    cin>>y;
    if(x>y){
        cout<<"loss"<<y-x;
    }
    else if(x==y){
        cout<<"no profit no loss:";

    }
    else{
        cout<<"profit "<<y-x;
    }
    cout<<endl;
    return 0;
}