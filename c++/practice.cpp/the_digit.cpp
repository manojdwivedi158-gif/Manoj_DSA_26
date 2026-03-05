#include<iostream>
using namespace std;
int main(){
    int x,y=0;
    cout<<"enter your num.";
    cin>>x;
    while(x>0){
        x=x/10;
        y++;
    }
    cout<<"the number have "<<y<<" digits";
}
