#include<iostream>
using namespace std;

int main(){
    int min,x=1;
    cout<<"Input number: ";
    cin>>min;
    do{
        cout<<"Input number: ";
        cin>>x;
        if(x<min && x!=0) min = x;
    }while(x>0);
    cout<<"Minimum = "<<min;
    return 0;
}