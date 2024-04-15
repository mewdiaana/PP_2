#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    string surname[n], name[n];
    pair<double, string> ans[n];
    for (int i = 0; i < n; i++) {
        cin >> surname[i] >> name[i];
        int m;
        cin >> m;
        double d = 0;
        int disc = 0;
        for (int j = 0; j < m; j++) {
            int x;
            string s;
            cin >> s >> x;
            disc += x;
            if (s == "A+") {
                d += x * 4.00;
            }
            if (s == "A") {
                d += x * 3.75;
            }
            if (s == "B+") {
                d += x * 3.5;
            }
            if (s == "B") {
                d += x * 3.00;
            }
            if (s == "C+") {
                d += x * 2.50;
            }
            if (s == "C") {
                d += x * 2.00;
            }
            if (s == "D+") {
                d += x * 1.5;
            }
            if (s == "D") {
                d += x * 1.00;
            }
        }
        double gpa = d / disc;
        ans[i].first = gpa;
        ans[i].second = surname[i] + " " + name[i];
    }
    sort(ans, ans + n);
    for (int i = 0; i < n; i++) {
        cout << ans[i].second << ' ' << fixed << ans[i].first << setprecision(3) << endl;
    }
}