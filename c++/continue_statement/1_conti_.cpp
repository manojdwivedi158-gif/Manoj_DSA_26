

  //   CONTINUEE STATEMENT USED TO SKIP A PARTICULAR ROUND:

//   #include<iostream>
//   using namespace std;
//   int main(){
//         int n;
//         for(n=1;n<21;n++){
//             if(n!=2 && n!=5) cout<<n<<" ";             //  && for if
//         }
//   }

#include<iostream>
  using namespace std;
  int main(){
        int n;
        for(n=1;n<21;n++){
            if(n==2 || n==5) continue;       // ||  for continue
            cout<<n<<" ";
        }
        
  }