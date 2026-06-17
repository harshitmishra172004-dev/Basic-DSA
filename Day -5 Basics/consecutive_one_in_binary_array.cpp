#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count=0 ;  int totalCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
             count++;
        }
        if(count > totalCount){
            totalCount = count;
        }
        else{
            count = 0;
        }

    }
    cout<<"Consecutive 1's: " << totalCount  <<endl;
    return 0;
}