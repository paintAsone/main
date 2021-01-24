#include<iostream>
#include<string>
using namespace std;

int findX_Y(string A){
    int n = A.length();
    int x=0,y=0;
    for(int i = 0; i<n; i++){
        if(A[i] == 'X') x++;
        else if(A[i] == 'Y') y++;
    }
    if(x==0 && y==0) return 0;
    //cout<<"x = "<<x<<" y = "<<y<<endl;
    if(x>y) return 1;
    else if(y>x) return -1;
    else return 0;
}


int main(){
    string A;
    cout << "Input X Y : ";
    getline(cin,A);
    cout<<findX_Y(A);
    return 0;
}