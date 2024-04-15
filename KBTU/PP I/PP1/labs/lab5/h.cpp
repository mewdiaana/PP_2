#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main() {
    int a[10] = {0}; 
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            a[s[i] - '0']++;
        }
    }

    int count = -1;

    for (int i = 0; i < 10; i++) {
        if (a[i] > 0) {
            if (count == -1) {
                count = a[i];
            } else if (count != a[i]) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;

    return 0;
}