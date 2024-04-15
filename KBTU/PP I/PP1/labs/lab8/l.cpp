#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int uniq(vector<int>& a, int n) {
    sort(a.begin(), a.end());
    int uniqueCount = 1; 
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[i - 1]) {
            uniqueCount++;
        }
    }
    return uniqueCount;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    } 
    cout << uniq(a,n);
    return 0;
}