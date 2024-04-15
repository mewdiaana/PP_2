#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> s;


    for (int i = 0; i < n; ++i) {
        string a;
        cin >> a;
        
        int oldSize = s.size();
        s.insert(a);
        if(oldSize == s.size()){
            cout << "user already exists" << endl;
        }
        else{
            cout << "new user added" << endl;
        }
    }
}