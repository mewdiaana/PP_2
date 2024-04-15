#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(4);
    v.push_back(5);
    sort(v.begin(), v.end());
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
    }
}