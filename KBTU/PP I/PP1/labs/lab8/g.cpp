#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, k;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    cin >> k;

    int primeCount = 0;
    for (int num : s) {
        if (num > k && isPrime(num)) {
            ++primeCount;
        }
    }

    cout << primeCount <<endl;

    return 0;
}