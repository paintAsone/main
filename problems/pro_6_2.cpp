#include<iostream>
#include<string>
using namespace std;

char findA(char A){
    if(A == 'A' || A == 'E' || A == 'I' || A == 'O' || A == 'U'){
        return 'y';
    }
    else{
        return 'n';
    }
}

int main(){
    char A;
    cin>>A;
    A = toupper(A);
    cout<<findA(A);
}