#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter two numbers:";
    cin>>x>>y;
    if(x>0 and y>0){
        cout<<"Ist Quadrant";
    }
     else if(x<0 and y>0){
        cout<<"IInd Quadrant";
    }
    else if(x>0 and y<0){
        cout<<"IVth Quadrant";
    }
    else if(x<0 and y<0){
        cout<<"IIIrd Quadrant";
    }
    else if(x==0){
        cout<<"y axis";
    }
    else{
        cout<<"x axis";
    }
}