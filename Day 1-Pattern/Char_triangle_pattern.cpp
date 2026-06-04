#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=65;j<=i+65;j++){
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }
}