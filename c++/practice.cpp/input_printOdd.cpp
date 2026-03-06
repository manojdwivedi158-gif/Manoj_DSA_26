// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%2!=0){
//             cout<<i<<" is odd";
//         }
//         else{
//             cout<<endl;
//         }
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int x=10,y=20;
    while(x<=y){
        if(x==y)
        continue;
        cout<<x<<" "<<y<<endl;
        x++;
        y--;
    }
}