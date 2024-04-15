#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void space(vector<int>& a, int n, int l) {
    for (int i = n - 1; i >= l; i--) {
        a[i + 1] = a[i];
    }
}

int main() {
    int n, l, r;
    cin >> n;
    vector<int> a(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> l >> r;

    space(a, n, l);

    a[l] = r;

    for (int i = 0; i < n + 1; i++) {
        cout << a[i] << " ";
    }
    return 0;
}