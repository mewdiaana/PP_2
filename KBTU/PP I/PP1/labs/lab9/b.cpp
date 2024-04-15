#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int a, i;
    cin>>a;
    int n[a];
    for(i=0; i<a; i++){
        cin>>n[i];
    }
    sort(n, n+a);
    for(i=a-1; i>=0; i--){
        if(n[i]%2==0){
            cout<<n[i]<<" ";
        }
    }
    for(i=0; i<a; i++){
        if(n[i]%2!=0){
            cout<<n[i]<<" ";
        }
    }
    return 0;
}