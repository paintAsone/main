#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
   int sum=0;
    for(int i=3; i<=333; i+=3){
        if(i%2 == 0) sum = sum+pow(i,2);
        else if(i%2 == 1) sum = sum+pow(i,3);
    }
    cout<<sum;
}