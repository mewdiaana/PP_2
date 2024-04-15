#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool yes(vector<int>& a, int k, int n) {
    for (int i =0; i <n; i++) {
        if(k==a[i]){
           return true; 
        }
    } 
    return false;
}

int main() {
    int n, k;
    cin >> n;
    vector<int> a(n, 0);
    for (int i =0; i <n; i++) {
        cin>>a[i];
    } 
    cin>>k;
    if(yes(a,k, n)==true){
        cout<<"Yes";
    } else{
        cout<<"No";
    }
    return 0;
}