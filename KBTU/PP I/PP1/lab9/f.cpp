#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<char> st;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push(s[i]);
        }
        if (st.empty() && s[i] == ')') {
            cout << "NO";
            return 0;
        }
        else st.pop();
    }
    if (st.empty()) cout << "YES";
    else cout << "NO";
}