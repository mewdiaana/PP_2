#include <iostream>
#include <string>
using namespace std;

bool isValidString(const string& s, int n) {
    int consecutiveDigits = 0;

    for (char c : s) {
        consecutiveDigits = (isdigit(c)) ? consecutiveDigits + 1 : 0;

        if (consecutiveDigits >= n) {
            return true;
        }
    }

    return false;
}

int main() {
    string s;
    int n;
    cin >> s;
    cin >> n;

    if (isValidString(s, n)) {
        cout << "Valid" << endl;
    } else {
        cout << "Not valid" << endl;
    }

    return 0;
}