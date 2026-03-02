// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your numnber:";
//     cin>>n;
//     for(int i=2;i<=n/2;i++){
//         if(n%i!=0) {
//             cout<<"prime number:";
//         }
       

        
//     }
    
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    bool flag =true;
    cout<<"enter a no.";
    cin>>n;
    for(int i=2;i<n/2;i++){
        if(n%i==0)
        flag=false;
        break;
    }
    if(flag==false)cout<<"composite";
    else cout<<"prime";
}