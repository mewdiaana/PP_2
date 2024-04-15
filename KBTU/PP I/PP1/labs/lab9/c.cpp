#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int freq[1001] = {0}; 
    int num, duplicates = 0;

    for (int i = 0; i < n; ++i) {
        cin >> num;
        if (++freq[num] == 2) {
            duplicates++;
        }
    }

    cout << duplicates << endl;
    return 0;
}