#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    if((num%100!=0 && num%4==0) || (num%400==0) ){
        cout<<"Leap year";
    }
    else{
        cout<<"Not a Leap year";
    }
}