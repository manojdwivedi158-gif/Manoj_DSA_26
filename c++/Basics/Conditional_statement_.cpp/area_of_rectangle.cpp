// if length and bredth is given find weather the area of rectangle is grreater then perameter:
 #include<iostream>
 using namespace std;
 int main(){
    int a,b,area,peremeter;
    cout<<"enter the length of rectangle:";
    cin>>a;
    cout<<"enter the bredth of rectangle:";
    cin>>b;
    area=a*b;
    peremeter = 2*(a+b);
    if(area>peremeter)
        cout<<"area is greater then peremeter";

    else if(area==peremeter){
        cout<<"both are equal";
    }
    else{
        cout<<"peremeter is greater then area";
    }


 }