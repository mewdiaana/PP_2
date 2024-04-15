#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> heights(N);
    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }
    stack<int> s;
    int maxArea = 0;

    for (int i = 0; i < N; ++i) {
        while (!s.empty() && heights[i] < heights[s.top()]) {
            int height = heights[s.top()];
            s.pop();
            int width = 0;
            if(s.empty()){
                width =i;
            }
            else{
                width = i - s.top() - 1;
            }

            maxArea = max(maxArea, height * width);
        }
        s.push(i);
    }

    while (!s.empty()) {
        int height = heights[s.top()];
        s.pop();
        int width = 0;
        if(s.empty()){
            width = N;
        }
        else{
            width = N - s.top() - 1;
        }
        maxArea = max(maxArea, height * width);
    }

    cout << maxArea << endl;

    return 0;
}