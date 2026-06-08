#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the digit: ";
    cin>>n;

    int sum=0;
    while(n>0){
        int reminder=n%10;
        sum+=reminder;
        n=n/10;
    }
    cout<<"Sum of the digit is: "<<sum;
    cout<<endl;
}