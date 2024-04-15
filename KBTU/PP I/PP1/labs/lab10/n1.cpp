#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPalindrome(const vector<int>& sequence) {
    int left = 0;
    int right = sequence.size() - 1;
    while (left < right) {
        if (sequence[left] != sequence[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int N; 
    cin >> N;

    vector<int> sequence(N);

    for (int i = 0; i < N; ++i) {
        cin >> sequence[i];
    }

    sort(sequence.begin(), sequence.end());

    do {
        if (isPalindrome(sequence)) {
            for (int i = 0; i < N; ++i) {
                cout << sequence[i] << " ";
            }
            cout << endl;
            return 0;
        }
    } while (next_permutation(sequence.begin(), sequence.end()));

    cout << "Impossible" << endl;

    return 0;
}