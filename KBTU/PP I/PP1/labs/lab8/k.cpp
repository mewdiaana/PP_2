#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void maxim(vector<int>& a, int k, int n) {
    int sum=0;
    for (int j = 0; j < k; ++j) {
        int maxIndex = j;
        for (int i = j + 1; i < n; ++i) {
            if (a[i] > a[maxIndex]) {
                maxIndex = i;
            }
        }
        swap(a[j], a[maxIndex]);
        sum+=a[j];
    }
    cout<<sum;
}

int main() {
    int n, k, min;
    cin >> n;
    vector<int> a(n, 0);
    for (int i =0; i <n; i++) {
        cin>>a[i];
    } 
    cin>>k;
    maxim(a,k, n);
    return 0;
}