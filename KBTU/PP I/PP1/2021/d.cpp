#include <iostream>

using namespace std;

int main(){

    int n, i1, i2;
    cin>>n;
    int a[n][n];

    for(i1=0; i1<n; i1++){
        for(i2=0; i2<n; i2++){
            cin>>a[i1][i2];
        }
    }

    for(i1=0; i1<n; i1++){
        for(i2=n-1; i2>=0; i2--){
            cout<<a[i2][i1]<<" ";
        }
        cout<<endl;
    }

}