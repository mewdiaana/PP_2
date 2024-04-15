#include <iostream>
#include <string>
using namespace std;

void summ() {
    string n;
    cin >> n;
    int sum = 0;

    for (char digit : n) {
        sum += digit - '0';
    }

    cout << sum;
}

int main() {
    summ();
    return 0;
}
