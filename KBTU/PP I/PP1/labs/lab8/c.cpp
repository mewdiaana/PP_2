#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int  main(){
    int n, i, l, r;
    cin>>n;
    vector<int> a(n, 0);
    for (i = 0; i < n; i++) {
        cin>>a[i];
    }
    cin>>l>>r;
    vector<int> b(n, 0);
    while (l < r) {
        swap(a[l], a[r]);
        l++;
        r--;
    }
    
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}