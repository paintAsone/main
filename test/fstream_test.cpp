#include<fstream>
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

/*int main(){
    ofstream hi("D:\\Desktop\\code\\main\\main\\test\\hi.txt");
    hi << "Hi";
    hi << "\nHey";
    hi.close();
    return 0;
}*/

/*int main(){
    ifstream source;
    source.open("source.txt");
    string text;
    while(getline(source,text)){
        cout<<text<<endl;
    }
    source.close();
    cout<<"END";
    return 0;
}*/

/*int main(){
    int count = 0;
    float sum = 0;
    string textline;
    ifstream source("data.txt");
    while(getline(source,textline)){
        cout<<textline<<endl;
        sum += atof(textline.c_str());
        count++;
    }
    cout<<"N = "<<count<<endl;
    cout<<"Avg = "<<sum/count<<endl;
    source.close();
    return 0;
}*/

int main(){
    for(int i = 0; i<10; i++){
        cout << "Hello\n";
    }
    return 0;
}