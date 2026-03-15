// enter your number:5
// 1 
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cout<<"enter your number:";
//    cin>>n;
//    for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         if((i+j)%2==0) cout<<"1 ";
//         else cout<<"0 ";
//     } cout<<endl;
//    } 
// }

// enter your number:5
// #####*
// ####**
// ###***
// ##****
// #*****

#include<iostream>
 using namespace std;
 int main(){
  int n;
   cout<<"enter your number:";
   cin>>n;
   for(int i=1;i<=n;i++){
    for(int k=1;k<=n-i+1;k++){
        cout<<"#";
    } 
    for(int j=1;j<=i;j++){
        cout<<"*";
    } cout<<endl;
   }
 }







