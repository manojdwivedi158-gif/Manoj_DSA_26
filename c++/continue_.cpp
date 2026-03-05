

//  Continue Statement...  used to skip one round ::

 
//  #include<iostream>
//  using namespace std;
//  int main(){
//     int n;
//     bool flag=true;
//     cout<<"enter your number";
//     cin>>n;
//     for(int i=2;i<=n/2;i++){
//         if(n%i==0){
//         flag = false;
//         break;
//         }


//         }

//         if(flag==false){
//             cout<<"prime";
//         }
//         else{
//             cout<<"composite";
//         }
    
//  }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    bool flag=true;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
        (flag=false);

    }   
    if(n==1){
        cout<<n<<" neither prime neither composite ";
    }
    else if(flag==true){
        cout<<"prime";
    }
    
    else{
        cout<<"composite";
    }
}