 

//  WRITE A PROGRAM TO FIND THE HIGHEST FACTOR OF A NUMBER N  (other then itself);

#include<iostream>
using namespace std;
int main(){
    int f,n;

    cout<<"enter your no. to find the factors .";
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0) f=i;
    }
    cout<<f<<" ";
}
