
// enter your number:7
//             * 
//           * *
//         * * *
//       * * * *
//     * * * * *
//   * * * * * *
// * * * * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your number:";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int k=1;k<=n-i;k++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//////////////

// enter your number:5
//         1 
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

// #include<iostream>
// using namespace std;
// int main(){
//      int n;
//      cout<<"enter your number:";
//      cin>>n;
//      for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//      }
// }

/////////////////////////////////////////


// enter your number:5
//     1
//    123
//   12345
//  1234567
// 123456789

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your number:";
//     cin>>n; 

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i*2-1;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }

// }

//////////////////////

// enter your number:5
//     A
//    ABC
//   ABCDE
//  ABCDEFG
// ABCDEFGHI

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your number:";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         } 
//         for(int j=1;j<=i*2-1;j++){
//             cout<<char(j+64);
//         }
//         cout<<endl;
//     }
// }

///////////////////////////////





// Enter your number:5

// 1
// 2 1
// 3 2 1
// 4 3 2 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number:";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=i-1;j>=1;j--){
            cout<<j<<" ";
        }
        
        cout<<endl;
      
    }
}



