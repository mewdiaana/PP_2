#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    multimap<int, int> dict; 

    for (int i = 0; i < n; i++) {
        int temp_1, temp_2;
        cin >> temp_1 >> temp_2;
        int sum = temp_1 + temp_2;
        dict.insert({sum, i});
    }

    for (const auto& pair : dict) {
        cout << pair.second + 1 << " "; 
    }

    return 0;
}


