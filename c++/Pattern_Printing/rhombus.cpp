

//   enter your no:5
//   enter your coloumn:7

//           * * * * * * * 
//         * * * * * * * 
//       * * * * * * *
//     * * * * * * *
//   * * * * * *. *


#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter your no:";
    cin>>n;
    cout<<"enter your coloumn:";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
         cout<<"  ";
         for(int j=1;j<=m;j++){
            cout<<"* ";
         } cout<<endl;
    }
}