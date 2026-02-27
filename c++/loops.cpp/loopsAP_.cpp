

// #include<iostream>
// using namespace std;
// int main(){


//     int x;
//     cout<<"enter n.";
//     cin>>x;
//     int a=3;
//     for(int i=2;i<=x;i++){
//         cout<<a<<" ";
//         a=a+3;
//     }


// }



//  QUESTION: print ...8,11,14,17........;

#include<iostream>              // formula .An==. a+(n-1)d
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=8;i<=3*n+5;i+=3){
        cout<<i<<" ";
    }
}