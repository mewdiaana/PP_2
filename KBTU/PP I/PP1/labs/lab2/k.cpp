#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int a;
    cin >> a;
    for(int i = 1; i <= a; i++) {
        if(pow(i, 2) <= a) {
            cout << pow(i, 2) << "\n";
        }
    }
}