#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int i, cnt = 0;
    for (i = 0; i < n; i++) {
        if (s[i] == ')') {
            cnt--;
        } else if (s[i] == '(') {
            cnt++;
        }
        if (cnt < 0) {
            cout << "NO";
            return 0;
        }
    }
    if (cnt > 0) {
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}