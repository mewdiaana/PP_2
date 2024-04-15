#include <iostream>
using namespace std;

int main(){
    int n, m, i, j, min, gpa, k;
    cin>>n>>m;
    int a[n][m];

    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    min=1000000;
    k=0;

    for (i=0; i<n; i++){
        gpa=0;
        for (j=0; j<m; j++){
            if(a[i][j]){
                gpa+=a[i][j];
            }
        }
        if (min>gpa){
            min=gpa;
            k=i+1;
        } 

    }
    
    cout << k;
}