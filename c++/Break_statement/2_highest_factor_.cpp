// #include<iostream>
// using namespace std;
// int main(){
//     int f,n;
//     cout<<"enter your number:";
//     cin>>n;
//     for(int i=1;i<n;i++){
//         if(n%i==0) f=i;
//     }
//     cout<<f<<endl;    
// }

#include<iostream>
using namespace std;
int main(){
    int f,n;
    cout<<"enter your number:";
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) f=i;
    }
    cout<<f<<endl;    
}

