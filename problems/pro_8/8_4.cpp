#include<iostream>
using namespace std;

void printPattern1(int x,int y){
    if(x <= 0 || y <= 0) cout << "Invalid input";
    else{
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                if(i%2 == 0 && j%2==0) cout<<"O";
                else if(i%2 == 0 && j%2==1) cout<<"X";
                else if(i%2 == 1 && j%2==0) cout<<"X";
                else if(i%2 == 1 && j%2==1) cout<<"O";
            }
            cout<<"\n";
        }
    } 
}


int main(){
    int x,y;
    cin>>x>>y;
    printPattern1(x,y);
    return 0;
}