#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, M; 
    std::cin >> N >> M;

    std::vector<int> sequence(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> sequence[i];
    }


    std::reverse(sequence.begin(), sequence.end());

    std::rotate(sequence.begin(), sequence.begin() + (N - M % N), sequence.end());

    for (int i = 0; i < N; ++i) {
        std::cout << sequence[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}