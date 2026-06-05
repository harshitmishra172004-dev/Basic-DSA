#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the Character: ";
    cin>>ch;

    if(ch>='A' && ch<='Z'){
        cout<<"The charaacter is in Upper Case.";
    }
    else if(ch>='a' && ch<='z'){
        cout<<" The character is in Lower Case.";
    }
    else if(ch>='0' &&ch<='9'){
        cout<<" The character is a Digit.";
    }
    else{
        cout<<" The character is a Special Character.";
    }
}
