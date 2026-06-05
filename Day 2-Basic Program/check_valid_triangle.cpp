#include<iostream>
#include<cmath>
using namespace std;    

int main(){
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    
    if((a==0 || b==0 || c==0) && (a+b+c !=180)){
        cout<<"Not a Valid Triangle"<<endl;
    }
    else{
        cout<<" Valid Triangle"<<endl;
    }
}