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


// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter your number of rows:";
//     cin>>n;
     
   
//     for(int i=n;i>=1;i--){
//         for(int j=i;j>=1;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }