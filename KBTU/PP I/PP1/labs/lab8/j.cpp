#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minim(vector<int>& a, int n){
    int mini=1000;
    for (int i =0; i <n; i++) {
        if(mini>a[i]){
            mini=a[i];
        }
    }
    return mini;
}

int maxim(vector<int>& a, int n){
    int maxi=0;
    for (int i =0; i <n; i++) {
        if(maxi<a[i]){
            maxi=a[i];
        }
    }
    return maxi;
}

int main() {
    int n, min, max;
    cin >> n;
    vector<int> a(n, 0);
    for (int i =0; i <n; i++) {
        cin>>a[i];
    } 
    min=minim(a,n);
    max=maxim(a,n);
    cout<<max-min;
    return 0;
}