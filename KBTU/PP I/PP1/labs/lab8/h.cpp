#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void minim(vector<int>& a, int k, int n) {
    for (int j = 0; j < k; ++j) {
        int minIndex = j;
        for (int i = j + 1; i < n; ++i) {
            if (a[i] < a[minIndex]) {
                minIndex = i;
            }
        }
        swap(a[j], a[minIndex]);
        cout << a[j] << " ";
    }
}

int main() {
    int n, k, min;
    cin >> n;
    vector<int> a(n, 0);
    for (int i =0; i <n; i++) {
        cin>>a[i];
    } 
    cin>>k;
    minim(a,k, n);
    return 0;
}