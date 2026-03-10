// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your number:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<char(i+96)<<" ";
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<char(j+95)<<" ";
        }
        cout<<endl;
    }
}