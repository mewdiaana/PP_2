#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int  main(){
    int n, i;
    cin>>n;
    vector<int> a(n, 0);
    for (i = 0; i < n; i++) {
        cin>>a[i];
    }
    vector<int> b(n, 0);
    for(i = 0; i < n; i++) {
        b[i]=a[n-i-1];
        cout << b[i] << " ";
    }
    return 0;
}