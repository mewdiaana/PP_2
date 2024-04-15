#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){

    map<string, int> st;

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if(st.find(s) == st.end()){
            st[s] = i+1;
        }
    }

    for (auto i = st.begin(); i != st.end() ; ++i) {
        cout << i->first << " " << i->second <<"\n";
    }

}