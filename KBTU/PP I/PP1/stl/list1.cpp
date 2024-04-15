#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(){

    list<int> l;

    l.push_back(2);
    l.push_front(35); // add element in the start of list

    list<int> :: iterator it = l.begin();

    cout << "It: " << *it << endl; 
    
}