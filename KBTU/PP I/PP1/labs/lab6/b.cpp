#include <iostream>
#include <cmath>
using namespace std;

int mod(){
    int n, i;
    cin>>n;
    int a[n];
    int b[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    for(i=0; i<n; i++){
        cin>>b[i];
    }
    for(i=0; i<n; i++){
        int d=a[i]-b[i];
        cout<< abs(d)<< " ";
    }
    return 0;
}

int main(){
    mod();
    return 0;
}