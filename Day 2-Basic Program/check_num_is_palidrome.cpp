#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string num = to_string(n);
    for(int i = 0 , j=num.length()-1; i<j; i++, j--){
        if(num[i] != num[j]){
            cout<<"The number is not palindrome.";
            return 0;
        }
    }

    cout<<"The number is palindrome.";
}