#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> vect;
    vect.push_back(2);
    vect.push_back(7);
    vect.push_back(8);
    vect.push_back(16);
    vect.push_back(5);
    vect.push_back(485);
    vect.push_back(55); // adds new element '55'

    for (int i = 0; i < vect.size(); i++) {
        cout << vect.at(i) << " ";
    }

    cout << endl << "pop_back: ";

    vect.pop_back();// delete last element

    for (int i = 0; i < vect.size(); i++) {
        cout << vect.at(i) << " ";
    }

    vect.clear(); // clear all elements in vector

    cout << endl << "After clean: " << vect.size() << endl;

    return 0;
}
