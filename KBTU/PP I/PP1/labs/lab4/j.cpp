#include <iostream>
using namespace std;

int main(){
    int n, i, j,s, m;
    cin>>n>>m;
    int a[n][m];

    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            cin >> a[i][j];
            s=0;
        }
    }

    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            s=i+j;
            if (s%2==0){
                cout <<a[i][j]+1<<" ";
            }
            else{
                cout<<a[i][j]-1<<" ";
            }
        }
        cout << endl;
    }
}