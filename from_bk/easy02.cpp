#include<iostream>
#include<string>
using namespace std;

int main(){
    string sex;
    int height;
    cin>>sex>>height;

    if(sex == "M"){
        if (height >= 180){
            cout<<"Basketball";
        }
        else{
            cout<<"Not PASS";
        }
    }
    if(sex  == "F"){
        if(height >= 170){
            cout<<"Volleyball";
        }
        else{
            cout<<"Not PASS";
        }
    }
    return 0;
}
