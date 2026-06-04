#include<iostream>
#include<cmath>
using namespace std;    

int main(){
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    
    if(a==0 || b==0 || c==0 || a==180 || b==180 || c==180||a+b==180 || b+c==180 || a+c==180){
        cout<<"Not a Valid Triangle"<<endl;
    }

    else if(a+b+c==180){
        cout<<"Valid Triangle"<<endl;
    }
    else{
        cout<<"Not a Valid Triangle"<<endl;
    }
}