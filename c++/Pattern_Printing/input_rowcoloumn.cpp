// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter thr no. of rows:";
//     cin>>n;
//     cout<<"enter thr no. of coloumns:";
//     cin>>m;
//     for(int i=1;i<=n;i++){
//         for(int i=1;i<=m;i++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter your number of rows:";
    cin>>n;
    cout<<"enter your number of coloumns:";
    cin>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<" *";
        }
        cout<<endl;
    }


}