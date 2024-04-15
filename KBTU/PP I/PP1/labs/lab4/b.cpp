#include <iostream>
using namespace std;

int main(){
    int n, i, j, max, sec, res;
    cin>>n;
    int a[n][n];

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            cin >> a[i][j];
            max=a[0][0];
            sec=a[0][0];
        }
    }

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (max<a[i][j]){
                max=a[i][j];
            }
        }
    }

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (a[i][j]!=max){
                if (sec<a[i][j]){
                sec=a[i][j];
                }
            }
        }
    }
    
    if (sec==max){
        cout << "0";
    } else{
        cout<< sec;
    }
}