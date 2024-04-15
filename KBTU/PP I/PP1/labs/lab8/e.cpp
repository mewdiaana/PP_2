#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int  main(){
    int n, i, l,r;
    cin>>n;
    vector<int> a(n, 0);
    for (i = 0; i < n; i++) {
        cin>>a[i];
    }
    cin>>l>>r;
    for (i = 0; i < n; i++) {
        if(i<l or i>r){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}