
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main () {
    string s1;
    cin >> s1;
    s1 = s1 + s1[0];
    string s2 = s1;
    reverse (s1.begin(), s1.end());
    if (s1 == s2) { 
        cout << "YES";
    }
    else { 
        cout << "NO";
    }
    return 0;
}
