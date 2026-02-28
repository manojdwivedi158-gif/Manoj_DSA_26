
//  DISPLAY 3,6,12,24,...

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number how many times you want to prrint :";
    cin>>n;
    int a=3;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a*=2;
    }
}