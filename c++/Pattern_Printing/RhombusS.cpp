
// enter your no:4

//        * * * * 
//      * * * *
//    * * * *
//  * * * *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your no:";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
         cout<<"  ";
         for(int j=1;j<=n;j++){
            cout<<"* ";
         } 
         cout<<endl;
    }
}