#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void show(int a){
    cout << a << endl;  
}

int main(){

    vector <int> v(5);
    fill(v.begin(), v.end(), 3); // fill vector with 3
    for_each(v.begin(), v.end(), show);
    
}