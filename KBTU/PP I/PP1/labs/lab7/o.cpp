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

void kin(int n, int k) {
    string res = "";

    while (n > 0) {
        int rem = n % k;
        res = lett(rem) + res;
        n /= k;
    }

    cout << res << endl;
}

int main() {
    int n, k;
    cin >> n >> k;

    kin(n, k);

    return 0;
}





