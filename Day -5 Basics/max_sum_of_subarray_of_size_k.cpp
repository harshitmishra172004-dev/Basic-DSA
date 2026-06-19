#include<iostream>
using namespace std;

int main (){
    int n,k;
    cin>>n>>k;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int currSum=0;
    int maxSum=0;

    for(int i=0;i<k;i++)
    {
        currSum+=arr[i];
    }

    maxSum=currSum;

    for(int i=k;i<n;i++)
    {
        currSum+=arr[i]-arr[i-k];

        maxSum=max(maxSum,currSum);
    }

    cout<<maxSum;

    return 0;
}