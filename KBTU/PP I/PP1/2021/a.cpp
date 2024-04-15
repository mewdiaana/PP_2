#include <iostream>

using namespace std;

int main(){

    int n, l, r, i;
    cin>>n>>l>>r;

    int a[n];

    for(i=0; i<n; i++){
        cin>>a[i];
    }

    for(i=0; i<l-1; i++){
        cout<<a[i]<<" ";
    }

    for(i=r-1; i>=l-1; i--){
        cout<<a[i]<<" ";
    }
    
    for(i=r; i<n; i++){
        cout<<a[i]<<" ";
    }

}