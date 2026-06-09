#include <iostream>
#include <string>
using namespace std;

bool check(string s){
    if(s.empty()){
        return true;
    }
    if(s[0] != s[s.size() -1]){
        return false;
    }
    return check(s.substr(1, s.size()-2));
}
int main(){
    string str;
    cin>>str;
    if(check(str)){
        cout<<"Palindrome";
    } else {
        cout<<"Not Palindrome";
    }
}