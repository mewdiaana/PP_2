#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    unordered_map<int, int> freq;
    int num;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        freq[num]++;
    }

    int duplicates = 0;
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second > 1) {
            duplicates++;
        }
    }

    cout << duplicates << endl;
    return 0;
}