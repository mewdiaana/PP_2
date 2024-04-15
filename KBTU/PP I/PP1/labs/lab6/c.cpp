#include <iostream>
#include <algorithm>
using namespace std;

int mod() {
    long long n, i, y;
    cin >> n;
    int a[n];
    int b[n];
    y = 0;

    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n);

    int j = 0;
    for (i = 0; i < n; i++) {
        while (j < n && b[j] < a[i]) {
            j++;
        }
        if (j < n && a[i] == b[j]) {
            y++;
            j++;
        }
    }

    cout << y;
    return 0;
}

int main() {
    mod();
    return 0;
}