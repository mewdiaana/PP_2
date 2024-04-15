
#include <iostream>
using namespace std;

int main() {
    long long n, l, r, final = 0;
    cin >> n >> l >> r;
    long long mass[n];
    for (long long i = 0; i < n; i++) {
        cin >> mass[i];
    }
    for (l-1; l-1<=r-1; l++) {
        final+=mass[l-1];
    }
    cout << final;
    return 0;
}