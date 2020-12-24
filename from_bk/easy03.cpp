#include<iostream>
#include<string>
using namespace std;


int main(){
    float w,h;
    cin>>w>>h;
    float BMI = w/(h*h);
    if(BMI < 18.5){
        cout<<"Underweight";
    }
    else if(BMI < 25){
        cout<<"Healthy";
    }
    else if(BMI < 30){
        cout<<"Overweight";
    }
    else{
        cout<<"Obese";
    }
    return 0;
}