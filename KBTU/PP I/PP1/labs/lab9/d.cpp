#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n,k, i, cnt=0;
    cin>>n>>k;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    for(i=0; i<n; i++){
        if(a[i]==k){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}