#include <iostream>
#include <string>
using namespace std;

char lett(int d) {
    if (d >= 0 and d <= 9) {
        return char('0' + d);
    } else {
        return char('A' + (d - 10));
    }
}

void kin(int n) {
    string res = "";

    while (n > 0) {
        int rem = n % 16;
        res = lett(rem) + res;
        n /= 16;
    }

    cout << res << endl;
}

int main() {
    int n;
    cin >> n ;

    kin(n);

    return 0;
}
