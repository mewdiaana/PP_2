#include <iostream>
using namespace std;

int main(){
    int n, m, i, j, min, k, d, sum;
    cin>>n>>m;
    int a[n][m];

    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    cout<< "coordinates of min elements: "<< endl;
    sum=0; 

    for(i=0; i<m; i++){
        min = a[0][i];
        k = 1;
        d = 1;
        
        for (j = 1; j < n; j++) {
            if (a[j][i] < min) {
                min = a[j][i];
                k = j + 1;
                d = i + 1;
            }
        }

        cout << k << ";" << d << endl;
        sum+=min;
    }  
    cout<<endl<< "Their sum: "<<endl<< sum;
}