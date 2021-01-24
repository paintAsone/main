#include<iostream>
#include<string>
using namespace std;

string pTu(int f, int h){
    string status;
    if(f<50){
        if(h<50) status = "Unfriend";
        else status = "Friend";
    }
    else if(f<80){
        if(h<50) status = "One-night-stand";
        else status = "Friend";
    }
    else if(f>=80){
        if(h<50) status = "One-night-stand";
        else status = "Girlfriend";
    }
    return status;
}

int main(){
    int face,habit;
    cin>>face>>habit;
    cout<<pTu(face,habit);
    return 0;
}