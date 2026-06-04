#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
if(a<b?a:b<c?b:c);
    cout<<"Largest number is : "<<(a>b?a:b>c?b:c);
}