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

    vector<int> :: reverse_iterator rit; // reverse our vector

    for(rit = v.rbegin(); rit != v.rend(); rit++){

        cout << *rit << " ";

    }
    
}