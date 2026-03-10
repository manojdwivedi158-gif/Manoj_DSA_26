#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter thr no. of rows:";
    cin>>n;
    cout<<"enter thr no. of coloumns:";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            cout<<"* ";
        }
        cout<<endl;
    }
}