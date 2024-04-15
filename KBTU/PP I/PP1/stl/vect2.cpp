#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> vect;

    vect.push_back(2);
    vect.push_back(7);
    vect.push_back(8);
    vect.push_back(16);
    vect.push_back(222);
    vect.push_back(34);
    vect.push_back(6);

    cout << "size: " << vect.size() << endl << "capacity: " << vect.capacity() << endl;
    //capacity - дополнительное место, запас для новых элементов

    vect.reserve(100); // задаем свой capacity

    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(60);

    cout << "size2: " << vect.size() << endl << "capacity2: " << vect.capacity();

    return 0;
}