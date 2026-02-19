// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"enter your your first number:";
//     cin>>x;
//     cout<<"enter your your second number:";
//     cin>>y;
//     cout<<endl;
//     cout<<x%y;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"enter 1st no.";
//      cin>>x;
//      cout<<"enter 2nd number";  // if you use negative number to find remainder your int variable take it as positive number:
//      cin>>y;                        
//      cout<<x%y;                 // BUT if your first number is negative then your answer wll be Negative number:
// }

#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;                 // Type conversion :
    float y = (float)x;
    cout<<y/2;
}

