// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your number:";
//     cin>>n;
//     for(int i=(n-1);i>=1;i--){
//         if(n%i==0){
            
//             cout<<i<<" ";
//             //  break;
//         }
           
//     }
// }


                       //  PROGRAM TO  FIND  THE HIGHEST  FACTOR  BY USING    ( BREAK  STATEMENT ) :



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    for(int i=(n-1);i>=1;i--){
        if(n%i==0){
            
            cout<<i<<" ";
             break;
        }
           
    }
}