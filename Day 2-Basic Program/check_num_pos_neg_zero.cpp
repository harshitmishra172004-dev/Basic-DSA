#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    if(n>0){
        cout<<"Positive Number";
    }
    else if(n==0){
        cout<<"Zero";cout<<"Not a Negative Number";
    }
    else{
        cout<<"Negative Number";
    }
}