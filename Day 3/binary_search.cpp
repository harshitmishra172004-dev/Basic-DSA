#include<iostream>
using namespace std;

int binarySearch(int size,int key,int arr[]){
    
    int start= 0;
    int end= size-1;
    while(start<=end){
        int mid = start+(end-start)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(key < arr[mid]){
            end = mid-1;
        }
        else{
            start=mid+1;
        }
    }

    return -1;
        
}

int main(){
    int size;
    cin>>size;
    
    
    int arr[size];
    
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int result= binarySearch(size, key,arr);
    if(result!=-1){
        cout<<"Element found at index : "<<result;
    }
    else{
        cout<<"Element Not Found : ";
    }
   

}