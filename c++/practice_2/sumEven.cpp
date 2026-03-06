#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"enter your number:";
    cin>>i;
    
    while(i!=0){
        
        n=i%10;
        if(n%2==0){
            sum=sum+n;
        }
        i=i/10;
        
    }
    cout<<sum;
}