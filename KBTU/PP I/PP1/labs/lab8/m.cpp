#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sumuniq(vector<int>& a, int n) {
    sort(a.begin(), a.end());
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (i == 0 || a[i] != a[i - 1]) {
            sum += a[i];
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    } 
    cout << sumuniq(a, n);
    return 0;
}