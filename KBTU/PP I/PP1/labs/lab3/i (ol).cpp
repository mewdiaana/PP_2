
#include <iostream>
using namespace std;

int main() {
    int n, l, r, final;
    cin >> n >> l >> r;
    int mass[n];
    for (int i = 0; i < n; i++) {
        cin >> mass[i];
    }
    int iter = 1;
    for (l-1; l-1<r-1; l++) {
        if ((l-1 == r-iter) || (l-1>r-iter)) {
            break;
        }
        int change = mass[l-1];
        mass[l-1]=mass[r-iter];
        mass[r-iter]=change;
        iter++;
    }
    for (int j = 0; j < n; j++) {
        cout << mass[j] << " ";
    }
    return 0;
}