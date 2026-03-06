// #include<iostream>
// using namespace std;
// int main(){
//     int x,y=0;
//     cout<<"enter your num.";
//     cin>>x;
//     while(x>0){
//         x=x/10;
//         y++;
//     }
//     cout<<"the number have "<<y<<" digits";
// }

//   writting a program to count digits:


// #include<iostream>
// using namespace std;
// int main(){
//     int x,n=0;
//     cout<<"enter your number:";
//     cin>>x;
//     while(x>0){
//         x=x/10;
//         n++;
//     }
//     cout<<n;
// }


#include<iostream>
using namespace std;
int main(){
    int x,n=0;
    cout<<"enter your number:";
    cin>>x;
    while(x>0){
        x=x/10;
        n++;
        cout<<"sum of all digits"<<x;
        
    }
    
}
