#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
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