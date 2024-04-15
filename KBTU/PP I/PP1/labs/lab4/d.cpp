#include <iostream>
using namespace std;

int main(){
    int n, i, j;
    cin>>n;
    for (int i=0; i<n; i++){
        cout<<i<<" ";
    }
    cout<< endl;

    for (int i=1; i<n; i++){
        cout<<i<<" ";
        for (int j=1; j<n; j++){
            cout << i*j << " ";
        }
        cout<< endl;
    }
    return 0;
}