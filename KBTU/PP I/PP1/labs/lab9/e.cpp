#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> contacts;
    string number;

    for (int i = 0; i < n; ++i) {
        cin >> number;
        contacts[number]++;
    }

    int count = 0;

    for (const auto &contact : contacts) {
        if (contact.second == 3) {
            count++;
        }
    }
    
    cout << count << endl;

    return 0;
}