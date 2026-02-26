// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your n.";
//     cin>>n;
//     for(int i=1;i<=2*n-1;i+=2){
//         cout<<i<<endl;
//     }
// }

                //   nth term = a+(n-1)d    d=difference of two no.

 // a=4 , d=3 , n=5; 
#include<iostream>
using namespace std;   // 4+(n-1)3
int main(){
    int n;
    cout<<"enter your no. of  terms";
    cin>>n;
    for(int i=4;i<=3*n+1;i+=3){
        cout<<i<<endl;
    }
}