#include <iostream> 
using namespace std;

int main() {
    int n, m = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (m < a[i]) {
            m = a[i];
        }
    }

    cout << m;
    return 0;
}