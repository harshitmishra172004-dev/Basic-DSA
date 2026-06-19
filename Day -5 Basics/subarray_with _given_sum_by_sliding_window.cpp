#include<iostream>
using namespace std ;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sum;
    cin>>sum;

    int currSum=0;
    int start=0;

    for(int end=0;end<n;end++)
    {
        currSum+=arr[end];

        while(currSum>sum)
        {
            currSum-=arr[start];
            start++;
        }

        if(currSum==sum)
        {
            cout<<start<<" "<<end;
            return 0;
        }
    }

    cout<<"No subarray found";
}