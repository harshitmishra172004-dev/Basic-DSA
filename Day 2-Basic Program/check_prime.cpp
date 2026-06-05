#include<iostream>
using namespace std;

int main(){
    int n; int count=0;
    cout<<"Enter the Number:";
    cin>>n;

    if(n<=1){
        cout<<"Not Valid Number";
        return 0;
    }
     else{
    for(int i=1; i<=n; i++){
        if( n%i == 0){
            count ++;
            break;
        }
    }

    if(count>0)
        cout<<"Number Is Not Prime";
    
    else
        cout<<"Number is Prime";
    
}
    cout<<endl;
}
