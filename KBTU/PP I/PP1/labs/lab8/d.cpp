#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int  main(){
    int n, i, k;
    cin>>n;
    vector<int> a(n, 0);
    for (i = 0; i < n; i++) {
        cin>>a[i];
    }
    cin>>k;
    for (i = 0; i < n; i++) {
        if(i!=k){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}