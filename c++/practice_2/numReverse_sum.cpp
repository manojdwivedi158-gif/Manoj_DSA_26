#include<iostream>
using namespace std;
int main(){
    int n,rev=0,ld,tsum,m;
    cout<<"enter your number:";
    cin>>n;
    m=n;

    while(n>0){

        ld = n%10;
       rev *= 10;
       rev += ld;
       n /= 10; 
    }
    cout<<rev<<endl;
   
     cout<<"The sum of "<<m<<" and "<<rev<<" is : "<<m+rev;
}