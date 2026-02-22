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
        cout<<"lVnd qudrant";
    }
    else if(x<0 and y>0){
        cout<<"lInd qudrant";
    }
    else{
        cout<<"lII qudrant ";
    }
    cout<<endl;
}