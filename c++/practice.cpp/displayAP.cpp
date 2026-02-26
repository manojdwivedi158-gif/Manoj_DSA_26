

//  Display thhis ap - 1,3,5,7,9..          //   An=a+(n-1)d     n=nth term;  a= first term;   d=distance,gap

#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"enter your end point:";
    cin>>y;
    for(int i=1;i<=y;i+=3){
        cout<<i<<" "<<endl;
    }
}