#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main(){
    double sum=0;
    for(double i=2; i<=222; i+=2){
        sum = (1.0/i)+sum;
    }
    cout<<setprecision(10)<<sum*1.0;
}