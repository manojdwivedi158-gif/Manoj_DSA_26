// #include<iostream>
// using namespace std;
// int main(){
//     int i,n,sum=0;
//     cout<<"enter your number:";
//     cin>>i;
    
//     while(i!=0){
//         n=i%10;
//         i=i/10;
//         sum=sum+n;
//     }
//     cout<<sum;
// }







#include<iostream>
using namespace std;
int main(){
    int i,n,sum=1;
    cout<<"enter your number:";
    cin>>i;
    
    while(i!=0){
        n=i%10;
        i=i/10;
        sum *= n;
    }
    cout<<sum;
}



