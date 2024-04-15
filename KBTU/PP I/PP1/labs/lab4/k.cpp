#include <iostream>
using namespace std;

int main(){
    int n, m, i, j,sum, som;
    cin>>n>>m;
    int a[n][m];

    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    for (i=0; i<n; i++){
        sum=0;
        for (j=0; j<m; j++){
            if(a[i][j]){
                sum+=a[i][j];
            }
        }
        if (sum){
            cout<<"The sum of row number "<<i+1<<" is "<<sum<<endl;
        }
    }
    for (i=0; i<m; i++){
        som=0;
        for (j=0; j<n; j++){
            if(a[j][i]){
                som+=a[j][i];
            }
        }
        if (som){
            cout<<"The sum of column number "<<i+1<<" is "<<som<<endl;
        }
    }     
}