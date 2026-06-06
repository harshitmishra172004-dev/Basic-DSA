#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the elements: ";
    cin>>a>>b;
    int gcd = 1;
    for(int i=1; i<=a && i<=b; i++){
        if(a%i == 0 && b%i == 0){
            gcd = i;
        }
        
    }
    cout<<"GCD of "<<a<<" and "<<b<<" is: "<<gcd;
    cout<<endl;
    int Lcm=(a*b)/gcd;
    cout<<" Lcm of " <<a<<" and "<<b<<" is: "<<Lcm;
}
