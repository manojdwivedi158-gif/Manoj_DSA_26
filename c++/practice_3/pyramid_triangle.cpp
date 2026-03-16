

//     1
//    121
//   12321
//  1234321
// 123454321
// #include <iostream>
// using namespace std;

// int main() {

//     int n = 5;

//     for(int i = 1; i <= n; i++) {

//         // Print spaces
//         for(int j = i; j < n; j++) {
//             cout << " ";
//         }

//         // Print increasing numbers
//         for(int j = 1; j <= i; j++) {
//             cout << j;
//         }

//         // Print decreasing numbers
//         for(int j = i-1; j >= 1; j--) {
//             cout << j;
//         }

//         cout << endl;
//     }

//     return 0;
// }
 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your number:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int k=n-i;k>1;k--){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i*2-1;j++){
//             cout<<j<<" ";
//         }
//         for(int j=i-1;j>=1;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }