#include <iostream>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    int a[n], b[n];
    for (int i=0; i<n; i++){
        cin>>x;
        a[i]=x;
    }
    for (int i=0; i<n; i++){
        b[n-1-i]=a[i];
    }
    for (int i=0; i<n; i++){
        cout << b[i] << " ";
    }
}