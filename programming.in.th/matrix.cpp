#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    int one[m][n],two[m][n],i,j;

    for(i = 0; i<m; i++){
        for( j = 0 ; j<n; j++){
            cin >> one[i][j];
        }
    }
    for(i = 0; i<m; i++){
        for( j = 0 ; j<n; j++){
            cin >> two[i][j];
        }
    }
    for(i = 0; i<m; i++){
        for( j = 0 ; j<n; j++){
            cout << one[i][j]+two[i][j] << " ";
        }
        cout<<"\n";
    }
    return 0;   
}


