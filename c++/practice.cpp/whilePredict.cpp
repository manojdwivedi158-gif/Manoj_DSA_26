#include<iostream>
using namespace std;
int main(){
    int i = 10,j=20;
    while(i<20){
        i++;
        j--;
        if(i==j) {
        continue;
    }
        else{
        cout<<i<<" "<<j<<endl;
    }
    
}
}

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
//     cout<<y;
// }
