#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    string str;
    int sum = 0;
    cin >> str;
    
    for (char c : str) {

        if (isdigit(c)) {
            sum += c - '0';
        }
        
    }

    cout << sum << endl;

    return 0;
}
