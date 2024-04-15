#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(){

    list<int> l = {15, 54, 72, 2, 7, 7, 7};

    l.push_back(2);
    l.push_front(35); 
    for(auto i = l.begin(); i != l.end(); i++){
        cout << *i << " ";
    }

    l.sort();
    cout <<endl<<"Sorted"<<endl;
    for(auto i = l.begin(); i != l.end(); i++){
        cout<< *i << " ";
    }

    l.pop_back(); // delete last element
    l.pop_front(); // delete first element
    cout<<endl<<"new"<<endl;
    for(auto i = l.begin(); i != l.end(); i++){
        cout<< *i << " ";
    }

    l.unique(); // delete последовательные одинаковые элементы
    cout<<endl<<"Unique"<<endl;
    for(auto i = l.begin(); i != l.end(); i++){
        cout<< *i << " ";
    }

    l.reverse(); // reverse
    cout<<endl<<"Reverse"<<endl;
    for(auto i = l.begin(); i != l.end(); i++){
        cout<< *i << " ";
    }
    
}