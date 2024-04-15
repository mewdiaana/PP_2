#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
int main() {
    int N;
    cin >> N;

    vector<int> sequence(N);

    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
    }
    int cnt=0;
    for (int i = 0; i < N; i++) {
        if(sequence[i]==sequence[0]){
            cnt++;
        }
    }
    if(cnt==N){
        cout<<sequence[0];
        return 0;
    }
    unordered_set<int> unique_set;
    vector<int> result;
    for (int num : sequence) {
        if (unique_set.find(num) == unique_set.end()) {
            result.push_back(num);
            unique_set.insert(num);
        }
    }
    do {
        for (int i = 0; i < result.size(); i++) {
            cout << result[i];
            if (i < N - 1) {
                cout << " ";
            }
        }
        cout << endl;
    } while (next_permutation(result.begin(), result.end()));

    return 0;
}