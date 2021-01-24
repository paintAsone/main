#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y;
    if(x>=20 && y>=20 && x+y>=50){
        if(y>x) y=2*y;
        z = (x+y)/2;
    }
    else{
        z = sqrt((x*x)+(y*y));
        if(z>50) z = 50;
    }
    cout<<z;
    return 0;
}