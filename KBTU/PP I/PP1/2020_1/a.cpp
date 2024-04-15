#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.size() < 2) {
        cout << s << ' ' << 0;
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += (s[i] - '0');
    }
    if (sum < 10) {
        cout << sum << ' ' << 1;
        return 0;
    }
    int cnt = 1;
    while(sum >= 10) {
        cnt++;
        string t = to_string(sum);
        int x = 0;
        for (int i = 0; i < t.size(); i++) {
            x += (t[i] - '0');
        }
        if (x < 10) {
            cout << x << ' ' << cnt;
        }
        sum = x;
    }
}