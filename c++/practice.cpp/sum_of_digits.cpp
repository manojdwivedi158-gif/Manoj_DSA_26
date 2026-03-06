// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cout<<"enter your number:";
//     cin>>n;
//     while(n!=0){
//         int ld=n%10;
//         n=n/10;
//         sum+=ld;
//     }
//     cout<<sum<<endl;
// }


#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter your number:";
    cin>>n;
    while(n!=0){
        int lastdigit = n%10;
        n /=10;
        sum+=lastdigit;
    }
    cout<<sum;
}