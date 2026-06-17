#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int temp = arr[0];
    int count = 1;

    for(int i = 1; i < n; i++) {
        if(arr[i] == temp)
            count++;
        else
            count--;

        if(count == 0) {
           temp = arr[i];
            count = 1;
        }
    }

    count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == temp)
            count++;
    }

    if(count > n / 2)
        cout << temp;
    else
        cout << "No Majority Element";

    return 0;
}

