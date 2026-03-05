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