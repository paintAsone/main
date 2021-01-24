#include<iostream>
using namespace std;
int main(){
    char x = 'A';
    switch(x){
        case 'X':
            cout<<'A';
            break;
        case 'A':
            cout<<'B';
        case 'B':
            cout<<'C';
            break;
        case 'C':
            cout<<'X';
            break;
        default:
            cout<<'Y';
    }
    return 0;
}