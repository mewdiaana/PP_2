#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string rev(string s, int b){
    if (b <= 0) {
        return "";
    } else {
        return s[b - 1] + rev(s, b - 1);
    }
}

int main() {

    string str;
    cin >> str;
    
    string h=rev(str, str.size());
    cout<<h; 

    return 0;
}