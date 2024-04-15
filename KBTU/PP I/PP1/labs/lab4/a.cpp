#include <iostream>
using namespace std;

int main(){
    int n, i, j, max;
    cin>>n;
    int a[n][n];

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            cin >> a[i][j];
            max=a[0][0];
        }
    }

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (max<a[i][j]){
                max=a[i][j];
            }
        }
    }
    cout << max;
}