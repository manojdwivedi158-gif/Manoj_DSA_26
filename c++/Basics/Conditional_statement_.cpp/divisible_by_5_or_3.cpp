// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter your number:";
//     cin>>x;
//     if (x%3==0 ){
//         cout<<"divisible of 3 ";
//     }
//     if(x%5==0){
//         cout<<"\ndivisible of 5";
//     }

//     else{
//         cout<<"not ";
//     }
    
// }


#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter your 1st no.:";
    cin>>a;
    cout<<"enter your 2nd no.:";
    cin>>b;
    if(a%2==0 and b%2==0){
        cout<<"your numbers are even";
    }
    else if(a%2==0 or b%2==0){
        cout<<"one is even";
    }
    else{
        cout<<"not an even numbers";
    }
}