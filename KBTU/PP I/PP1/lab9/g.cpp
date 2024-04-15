#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<char> q;
    string s;
    cin >> s; 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') q.push_back(s[i]);
        else {
            if (q.back() == '0') q.push_back(s[i]);
            else q.pop_back();
        }
    }
    while(!q.empty()) {
        cout << q.front();
        q.pop_front();
    }
}