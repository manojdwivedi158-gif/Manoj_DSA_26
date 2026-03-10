// print the output 1234
//                  1234
//                  1234
//                  1234


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    
        for(int i=1;i<=n;i++){
            for(int m=1;m<=n;m++){
            cout<<m<<" ";
            }
            cout<<endl;

        }
        cout<<endl;
    
}