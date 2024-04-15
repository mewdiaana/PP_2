#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower); 
    sort(s.begin(), s.end()); 
    
    int count = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (i == 0 || s[i] != s[i - 1]) {
            count++;
        }
    }

    cout << count << endl;

    vector<char> uni;
    for (int i = 0; i < s.size(); ++i) {
        if (i == 0 || s[i] != s[i - 1]) {
            uni.push_back(s[i]);
        }
    }
    for (char c = 'a'; c <= 'z'; ++c) {
        if (binary_search(uni.begin(), uni.end(), c)) {
            cout << c << " ";
        }
    }

    return 0;
}