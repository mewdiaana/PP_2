#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> m;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }
    int ans = 0;
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        if ((*it).second >= 2) ans++;
    }
    cout << ans;
}