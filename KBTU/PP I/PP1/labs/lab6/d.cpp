#include <iostream>
#include <algorithm>
using namespace std;

void book() {
    int n, m, i;
    cin>>n;
    int a[n];

    for(i=0; i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    bool b=false;
    for(i=0; i<n; i++){
        if(a[i]==m){
            b = true;
            break;
        } 
    }

    if(b==true){
        cout<<"Yes";
    } else {
        cout<<"No";
    }
}

int main() {
    book();
    return 0;
}