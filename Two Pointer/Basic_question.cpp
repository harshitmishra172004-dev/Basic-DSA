// arr(1 0 1 0 1 0) , Arrange in ascending order using two pointer approach

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

      int start=0;
      int end = n-1;

    while(start<end){
        if(arr[start]==0){
            start++;
        }
        else{
            if(arr[end]==0){
                (swap(arr[start],arr[end]));
                start++, end--;
            }
            else
            end--;
        }
        for(int num: arr){
            cout<<num<<" "; 
        }
    }

    cout<<endl;
    return 0;
}
   