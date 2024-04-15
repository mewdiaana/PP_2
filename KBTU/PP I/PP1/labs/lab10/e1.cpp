#include <iostream>
#include <string>
#include <map>
#include <iomanip> 
#include <vector>
#include <algorithm> 
using namespace std;
int main() {
    int n;
    cin >> n;
    map<string, int> v;
    for (int i = 0; i < n; ++i) {
        int a; 
        cin >> a;
        for (int j = 0; j < a; ++j) {
            string place;
            int count;
            cin >> place >> count;
            v[place] += count;
        }
    }
    int tStud = 0;
    for (const auto& s : v) {
        tStud += s.second;
    }

    vector<pair<string, double>> p;
    for (const auto& s : v) {
        double per = (static_cast<double>(s.second) / tStud) * 100.0;
        p.emplace_back(s.first, per);
    }
    sort(p.begin(), p.end());
    for (const auto& s : p) {
        cout << s.first << " " << s.second << endl;
    }
    return 0;
}