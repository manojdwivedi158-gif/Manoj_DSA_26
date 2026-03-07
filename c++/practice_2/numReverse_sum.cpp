#include<iostream>
using namespace std;
int main(){
    int n,sum=0,ld,tsum,m;
    cout<<"enter your number:";
    cin>>n;
    m=n;

    while(n>0){

        ld = n%10;
       sum *= 10;
       sum += ld;
       n /= 10; 
    }
    cout<<sum<<endl;
   
     cout<<m+sum;
}