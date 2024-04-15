#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int N, M; 
    cin >> N >> M;

    vector<int> sequence1(N);
    vector<int> sequence2(M);

    for (int i = 0; i < N; ++i) {
        cin >> sequence1[i];
    }

    for (int i = 0; i < M; ++i) {
        cin >> sequence2[i];
    }

    auto it1 = unique(sequence1.begin(), sequence1.end());
    auto it2 = unique(sequence2.begin(), sequence2.end());

    sequence1.resize(distance(sequence1.begin(), it1));
    sequence2.resize(distance(sequence2.begin(), it2));

    vector<int> mergedSequence;
    mergedSequence.reserve(sequence1.size() + sequence2.size());

    int i = 0, j = 0;
    while (i < sequence1.size() || j < sequence2.size()) {
        if (i < sequence1.size()) {
            mergedSequence.push_back(sequence1[i]);
            i++;
        }
        if (j < sequence2.size()) {
            mergedSequence.push_back(sequence2[j]);
            j++;
        }
    }

    auto it3 = unique(mergedSequence.begin(), mergedSequence.end());

    mergedSequence.resize(distance(mergedSequence.begin(), it3));

    for (int k = 0; k < mergedSequence.size(); ++k) {
        cout << mergedSequence[k];
        if (k < mergedSequence.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}