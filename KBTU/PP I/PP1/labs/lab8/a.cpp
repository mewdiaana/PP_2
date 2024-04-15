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
    sort(a.begin(), a.end());
    for(i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}