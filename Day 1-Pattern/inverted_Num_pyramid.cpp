#include<iostream>
using namespace std;

int main(){
    int n=5;
    cout<<"Enter the Number: ";
    cin>>n;

    for(int i=n;i>=1;i++){
        for(int j=1;j<i;j++){
            cout<<"  ";
            }
            for(int j=n;j>=1;j--){
                cout<<j<<" ";
            }
            for(int j=n;j>1;j--){
                cout<<j<<" ";
            }
             for(int j=i;j<n;j++){
            cout<<"  ";
            }
            cout<<endl;
    }
}