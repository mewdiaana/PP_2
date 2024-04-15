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

    it++; // go to next element

    cout << "It: " << *it << endl;

    it+=2;

    cout << "It: " << *it << endl;

    it--;

    cout << "It: " << *it << endl;
    
}