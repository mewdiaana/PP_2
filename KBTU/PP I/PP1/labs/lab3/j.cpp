#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    int mass[a];
    for (int i = 0; i < a; i++) {
        cin >> mass[i];
        if (mass[i]==b) {
            cout << i;
            return 0;
        } else if (mass[i]>b) {
            cout << i;
            return 0;
        }
    }
    cout << a;

    return 0;
}