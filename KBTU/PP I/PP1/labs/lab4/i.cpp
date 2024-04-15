#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    int a[n][l];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            cin >> a[i][j];
        }
    }
  for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            int m = a[i][j];
            int r = sqrt(m);

            if (r * r == m) {
                a[i][j] = r;
            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}