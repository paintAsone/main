#include<iostream>
#include<string>
using namespace std;

char findA(char A){
    if(A == 'A' || A == 'E' || A == 'I' || A == 'O' || A == 'U'){
        return 'Y';
    }
    else{
        return 'N';
    }
}

int main(){
    char A;
    cin>>A;
    A = toupper(A);
    cout<<findA(A);
}