// teling the numbers that they  are sides of a triangle"
//  (hint):
//  if sides=a,b,c
// so,  a+b>c
//      b+c>a
//      c+a>b

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter your first length of triangle:";
    cin>>a;
    cout<<"enter your second length of triangle:";
    cin>>b;
    cout<<"enter your third length of triangle:";
    cin>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"triangle's length";

    }
    else {
        cout<<"not sides of triangle:";
        
    }

}