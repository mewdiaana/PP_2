#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int a;
    cin >> a;
    for(int i = 0; i <= a; i++) {
        if(pow(2, i) <= a) {
            cout << pow(2, i) << " ";
        } else {
            return 0;
        }
    }

    return 0;
}