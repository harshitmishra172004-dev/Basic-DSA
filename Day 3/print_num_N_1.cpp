#include<iostream>
using namespace std;

int printNum(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    return printNum(n-1);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    printNum(n);
    return 0;
}