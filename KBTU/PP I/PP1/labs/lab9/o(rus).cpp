#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>

using namespace std;


int main() {

    map<string, string> passwords;

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string l, p;
        cin >> l >> p;
        passwords[l] = p;
    }
    int k;
    cin >> k;

    for (int i = 0; i < k; ++i) {
        string l, p;
        cin >> l >> p;

        if(passwords.find(l) == passwords.end()){
            cout << "login error" << endl;
            continue;
        }

        if(passwords[l] != p){
            cout << "password error" << endl;
            continue;
        }

        cout << "correct password" << endl;
    }
}