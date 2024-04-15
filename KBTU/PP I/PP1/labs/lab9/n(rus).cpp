#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>

using namespace std;


int main() {

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int count = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i == j) continue;

            int c = v[i] xor v[j];

            if(find(v.begin(), v.end(), c) != v.end()){
                count ++;
            }
        }
    }

    cout << count/2;
}