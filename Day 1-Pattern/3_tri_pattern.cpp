#include <iostream>
using namespace std;

int main() {
    int n ;
cout<<"Enter the Number: ";
cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            for(int j=0;j<i*n;j++){
                cout<<" ";
            }
            for(int k=0;k<j;k++){
                cout<<"*";
            }
            cout << endl;
        }
    }
     return 0;
        
    }

   

