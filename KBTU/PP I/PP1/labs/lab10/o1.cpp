#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string toBinary(int number) {
    if (number == 0) {
        return "0";
    }
    
    string binary = "";
    while (number > 0) {
        binary = (number % 2 == 0 ? "0" : "1") + binary;
        number /= 2;
    }
    
    return binary;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> numbers(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }
    
    for_each(numbers.begin(), numbers.end(), [](int& num){
        string binary = toBinary(num);
        cout << binary << endl;
    });    
    return 0;
}