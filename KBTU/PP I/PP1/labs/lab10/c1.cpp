#include <iostream>
#include <string>
#include <stack>
#include <cmath>

using namespace std;
bool isTwoDigitSquare(int n) {
    int squareRoot = static_cast<int>(sqrt(n));
    return squareRoot * squareRoot == n && n >= 10 && n <= 99;
}

int main() {
    string n_str;
    cin >> n_str;

    stack<char> st;

    for (char digit : n_str) {
        if (st.empty()) {
            st.push(digit);
        } else {
            int currentNum = (digit - '0') + (st.top() - '0') * 10;
            if (!isTwoDigitSquare(currentNum)) {
                st.push(digit);
            } else {
                st.pop();
            }
        }
    }

    if (st.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        string reversed_result;
        while (!st.empty()) {
            reversed_result += st.top();
            st.pop();
        }
        cout << reversed_result << endl;
    }

    return 0;
}