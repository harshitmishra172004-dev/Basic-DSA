#include<iostream>
using namespace std;

int main(){
    int n, sum=0, temp, remainder;
    cout<<"Enter the Number: ";
    cin>>n;
    temp=n;

    while(temp!=0){
        remainder = temp%10;
        sum += remainder*remainder*remainder;
        temp /= 10;
    }

    if(sum == n){
        cout<<"The number is an Armstrong number.";
    }
    else{
        cout<<"The number is not an Armstrong number.";
    }
}