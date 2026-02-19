// #include<iostream>
// using namespace std;
// int fibbo(int g){
//     if(g==0 or g==1){
//         return 0;
//     }
//     return fibbo(g-1)+(g-2);

// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fibbo(n)<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int fibbo(int g){
    if(g==0 or g==1){
        return 0;
    }
    return fibbo(g-1)+(g-2);

}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n-1)
    cout<<fibbo(n)<<endl;
    return 0;
}