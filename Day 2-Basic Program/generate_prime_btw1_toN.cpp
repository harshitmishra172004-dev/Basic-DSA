#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    if(n<=1){
        cout<<"There are no prime numbers between 1 and "<<n;
        return 0;
    }
    cout<<"Prime numbers btw 1 and "<<n<<" are: ";
    for(int i=2; i<=n; i++){
        bool isPrime = true;
        for(int j=2;j<=i/2;j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}