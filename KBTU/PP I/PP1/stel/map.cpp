#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> m;
    m[2]++;
    m[2]++;
    m[4]++;
    m[6] = 4;
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        cout << (*it).first << ' ' << (*it).second << '\n';
    }
}