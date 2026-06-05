#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string unit;
    float value;
    cout<<"Enter the value: ";
    cin>>value;
    cout<<"Enter the unit(km, m, cm, mm): ";    
    cin>>unit;
    if(unit=="km"){
        cout<<"Value in meter: "<<value*1000<<" m";
    }
    else if(unit=="m"){
        cout<<"Value in meter: "<<value<<" m";
    }
    else if(unit=="cm"){
        cout<<"Value in meter: "<<value/100<<" m";
    }
    else if(unit=="mm"){
        cout<<"Value in meter: "<<value/1000<<" m";
    }
    else{
        cout<<"Invalid unit entered.";

    }
    return 0;
}