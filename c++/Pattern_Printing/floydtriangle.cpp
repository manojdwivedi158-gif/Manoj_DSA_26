

//  enter your no . 4

//  1 
//  2 3
//  4 5 6
//  7 8 9 10



#include<iostream>
using namespace std;
int main(){
    int a=1,n;
    cout<<"enter your no.";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";   //  or  cout<<a++<<" ";
            a++;
        }
        cout<<endl;
        
}
}