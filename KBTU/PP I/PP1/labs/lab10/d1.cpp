#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compareRows(const vector<int>& row1, const vector<int>& row2) {
    int sum1 = 0, sum2 = 0;
    for (int num : row1) {
        sum1 += num;
    }
    for (int num : row2) {
        sum2 += num;
    }

    if (sum1 != sum2) {
        return sum1 < sum2;
    }

    if (row1.size() != row2.size()) {
        return row1.size() < row2.size();
    }

    for (size_t i = 0; i < row1.size(); ++i) {
        if (row1[i] != row2[i]) {
            return row1[i] < row2[i];
        }
    }

    return true;
}

int main() {
    int a;
    cin>>a;
    vector<vector<int>> arr;
    for (int i = 0; i < a; i++) {
        int b;
        cin>>b;
        vector<int> v1;
  
        for (int j = 0; j < b; j++) {
            int n;
            cin>>n;
            v1.push_back(n);
        }
  
        arr.push_back(v1);
    }
    sort(arr.begin(), arr.end(), compareRows);

    for (const auto& row : arr) {
        for (int num : row) {
            cout << num << ' ';
        }
        cout << '\n';
    }

    return 0;
}