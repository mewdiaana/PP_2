#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> vect;
    // vector<int> vect(30); 30 элементов со значением 0

    vect.resize(20); // создание 20 элементов со значением "0"

    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " ";
    }

    return 0;
}