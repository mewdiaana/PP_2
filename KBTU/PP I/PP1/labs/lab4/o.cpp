#include <iostream>
using namespace std;

int main(){
    int n, i, j, max, c, r;
    cin>>n;
    int a[n][n];

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            cin >> a[i][j];
            max=a[0][0];
            c=1;
            r=1;
        }
    }

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if(i=j){
                if (max<a[i][j]){
                    max=a[i][j];
                    c=i+1;
                    r=j+1;
                }
            }
        }
    }
    cout<< "Maximum element is: "<< max<<" "<< "with coordinates: "<< c<<";"<<r;
    
}