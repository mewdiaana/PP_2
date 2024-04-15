#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(8);
    v.push_back(13);
    v.push_back(9);
    v.push_back(4);

    vector<int> :: iterator it;

    it = v.begin();

    *it = 1000; // change 1 to 1000

    cout << "It_begin: " << *it << endl;

}