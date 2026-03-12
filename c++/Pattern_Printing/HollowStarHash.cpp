

//  enter the number of rows:4
//  enter the number of coloumns:6
//  * * * * * * 
//  * # # # # *
//  * # # # # *
//  * * * * * *

#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the number of rows:";
    cin>>n;
    cout<<"enter the number of coloumns:";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1 || i==n || j==1 || j==m){
                cout<<"* ";
            }
            else cout<<"# ";
        }
         cout<<endl;
    }
}