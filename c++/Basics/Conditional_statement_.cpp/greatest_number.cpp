
    #include<iostream>
    using namespace std;
    int main(){
        int x,y,z;
        cout<<"enter your 1st number:";
        cin>>x;
        cout<<"enter your 2nd number:";
        cin>>y;
        cout<<"enter your 3rd number:";
        cin>>z;
        if(x==y && x==z){
            cout<<"all equal numbers.";
        }
        else if(x>=y && x>=z){
            cout<<"x is greatest number.";
        }
        else if(x<=y && y>=z){
            cout<<"y is greatest number.";
        }
        else {
            cout<<"z is greatest number.";
        }
        
            
        
        return 0;
    }
