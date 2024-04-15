#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void summ() {
    int n;
    cin>>n;
    int sum = 0;
    int a=n%10;
    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }


    if (a == 0) {
        cout << "No";
    } else if (sum % a == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}

int main() {
    summ();
    return 0;
}