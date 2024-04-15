#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void reverse() {
    int n, i;
    cin>>n;
    int a[n];
    int b[n];
    for(i=0; i<n; i++){
        cin>>a[i];}
    for(i=0; i<n; i++){
        b[i]=a[n-1-i];
        cout<<b[i]<<" ";
    }
}

int main() {
    reverse();
    return 0;
}