#include<iostream>
#include<string>
using namespace std;

int main(){
    string grade = " ";
    int point;
    cin>>point;
    if(point >= 80){
        grade = "A";
    }
    else if (point >= 75){
        grade = "B+";
    }
    else if (point >= 70){
        grade = "B";
    }
    else if(point >=65){
        grade = "C+";
    }
    else if (point >= 60){
        grade = "C";
    }
    else if(point >=55){
        grade = "D+";
    }
    else if (point >= 50){
        grade = "D";
    }
    else{
        grade = "F";
    }
    cout<<grade;
}