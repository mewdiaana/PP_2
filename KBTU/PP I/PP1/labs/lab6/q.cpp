#include <iostream>
#include <iomanip>
using namespace std;


void girls() {
    int a, b;
    cin >> a >> b;
    double c = static_cast<double>(b) / a * 100.0;
    cout << c; 
}

int main() {
    girls();
    return 0;
}






