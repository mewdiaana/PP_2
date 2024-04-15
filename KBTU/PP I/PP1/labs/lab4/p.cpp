#include <iostream>
using namespace std;

int main(){
    int n, i, j, sum;
    cin>>n;
    int a[n][n];

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            cin >> a[i][j];
            
        }
    }
    sum=0;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if((i + j) == (n - 1)){
                sum+=a[i][j];
            }
        }
    }
    cout << sum;
}