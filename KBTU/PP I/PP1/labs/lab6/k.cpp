#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void summ() {
    int n;
    cin>>n;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    cout<<sum;
}

int main() {
    summ();
    return 0;
}