#include<iostream>
#include<string>
using namespace std;

string reverseString(string s){
    if (s.empty()){
        return "";
    }
    return reverseString(s.substr(1)) + s[0];
}
int main(){
    string s;
    cin>>s;
    string result = reverseString(s);
    cout<<result<<" ";
}