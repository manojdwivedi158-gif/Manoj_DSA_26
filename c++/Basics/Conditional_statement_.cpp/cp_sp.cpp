#include<iostream>
using namespace std;  //PROGRAM TO DETERMINE PROFIT OR LOSS:
    int main(){
    float x,y;
    cout<<"enter the cost price Rs.";
        cin>>x;
    cout<<"enter the selling price Rs.";
        cin>>y;
        
        if(x>y){
            cout<<"loss Rs."<<x-y;
            cout<<" "<<(x-y)/100;}
        else if (x==0)
        {
            cout<<"no loss no profit";
            cout<<"0% profit";
        }
        else{    
            cout<<"profit rs."<<y-x;
            cout<<"profit percentage"<<(y-x)/100;
        }

        return 0;
        
}
