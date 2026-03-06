#include<iostream>
using namespace std;
int main(){
    int n,pr=1;
    cout<<"enter your number:";
    cin>>n;

    while(n!=0){
        int p = n%10;
        n = n/10;
        pr *= p;

    }
    cout<<"the product of digits given numbers: "<<pr;
    return 0;


}