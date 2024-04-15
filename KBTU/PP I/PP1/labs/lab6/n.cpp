#include <iostream>
using namespace std;

void t() {
    int n, m;
    cin >> n >> m;
    
    int a[1000][1000];
    int b[1000][1000];

    // Input the original matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Transpose the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j] = a[j][i];
        }
    }

    // Output the transposed matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    t();
    return 0;
}