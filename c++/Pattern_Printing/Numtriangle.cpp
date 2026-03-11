

//  enter your number:4

//  4 3 2 1 
//  4 3 2
//  4 3
//  4


//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"enter your number:";
//      cin>>n;
//      for(int i=1;i<=n;i++){
//          for(int j=n;j>=i;j--){
//              cout<<j<<" ";
//          }
//          cout<<endl;
//      }
//  }



//  enter your number:4
//  1 1 1 1 
//  2 2 2
//  3 3
//  4

#include<iostream>
 using namespace std;
 int main(){
     int n;
     cout<<"enter your number:";
     cin>>n;
     for(int i=1;i<=n;i++){
         for(int j=n;j>=i;j--){
             cout<<i<<" ";
         }
         cout<<endl;
     }
 }

