#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int uniq(vector<int>& a, vector<int>& b, int n) {
    sort(a.begin(), a.end());
    int index = 0;
    b[index++] = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[i - 1]) {
           b[index++] = a[i];
        }
    }
    return index;
}

void save(vector<int>& b, int count) {
    for (int i = 0; i < count; ++i) {
        if(b[i]%2!=0){
            cout << b[i] << " ";
        }
    }
}

void fill(vector<int>& a, int n) {
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    } 
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    fill(a, n);
    int count = uniq(a, b, n);
    save(b, count);

    return 0;
}