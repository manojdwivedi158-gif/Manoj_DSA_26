
//   china have also good technology & architecture
//   hello brother
//   USA have the best technology & ai infrastructure
//   russia is the first country in land
//   you are in india
 
 #include<iostream>
using namespace std;
int india(){
    cout<<" you are in india "<<endl;
}
int russia(){
    cout<<" russia is the first country in land "<<endl;
    india();
}
int usa(){
    cout<<" USA have the best technology & ai infrastructure "<<endl;
    russia();
    //   china();    it will not run here because it should before the usa:
}
int china(){
    cout<<" china have also good technology & architecture"<<endl;
   usa(); // function call
}
int main(){
    cout<<"hello brother"<<endl;
    china();  //  function call : 
    
}