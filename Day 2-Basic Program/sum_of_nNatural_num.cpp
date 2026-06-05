#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the Number: ";
    cin>>n;
    if(n<0){
        cout<<"Enter positive Number."<<endl;
        return 0;
    }
    sum= n*(n+1)/2 ;
    cout<<sum<<endl;
}