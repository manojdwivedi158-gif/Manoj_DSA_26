//  enter your number:5
//  a a a a a 
//  b b b b b
//  c c c c c 
//  d d d d d
//  e e e e e
e
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<char(i+96)<<" ";
        }
        cout<<endl;
    }
}


//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"enter your number:";
//      cin>>n;
//      for(int i=1;i<=n;i++){
//          for(int j=1;j<=n;j++){
//              cout<<char(j+96)<<" ";
//          }
//          cout<<endl;
//      }
//  }

//  enter your number:5

//  a b c d e 
//  a b c d e
//  a b c d e 
//  a b c d e
//  a b c d e