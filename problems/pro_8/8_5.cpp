#include<iostream>
using namespace std;

void printPattern2(int N){
    if(N <= 0) cout << "Invalid input";
    else{
        for(int i=0 ; i<N; i++){
            for(int j=0 ; j<N; j++){
                if(j == i || j<= i) cout << "O";
                else cout<<"X";
            }
            cout<<"\n";
        }
    }
}

int main(){
    int x;
    cin>>x;
    printPattern2(x);
    return 0;
}