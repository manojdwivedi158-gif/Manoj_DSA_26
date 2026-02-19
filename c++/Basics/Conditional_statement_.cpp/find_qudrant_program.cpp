#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter your x axis:";
    cin>>x;
    cout<<"enter your y axis";
    cin>>y;
    if(x>0 and y>0){
        cout<<"Ist qudrant";
    }
    else if(x>0 and y<0){
        cout<<"llnd qudrant";
    }
    else if(x<0 and y>0){
        cout<<"lllnd qudrant";
    }
    else{
        cout<<"lV qudrant ";
    }
    cout<<endl;
}