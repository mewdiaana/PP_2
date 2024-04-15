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

    for(vector<int> :: iterator i = v.begin(); i != v.end(); i++){

        cout << *i << " ";

    }

    vector<int> :: iterator z = v.begin(); 
    advance(z, 5);
    v.insert(z, 999);
    cout << endl << "Insert:" << endl;

    for(vector<int> :: iterator i = v.begin(); i != v.end(); i++){

        cout << *i << " ";

    }
    
    cout << endl << "Erase:" << endl;
    vector<int> :: iterator y = v.begin();
    advance(y, 4);
    v.erase(y);

    for(vector<int> :: iterator i = v.begin(); i != v.end(); i++){

        cout << *i << " ";

    }

    cout << endl << "Erase range:" << endl;
    vector<int> :: iterator x = v.begin();
    advance(x, 1);
    v.erase(x, x+3);

    for(vector<int> :: iterator i = v.begin(); i != v.end(); i++){

        cout << *i << " ";

    }
    
}