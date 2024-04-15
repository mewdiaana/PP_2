#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib> // random generate f-n
#include <time.h> // time(0)

using namespace std;

int main(){

    srand(time(0));

    // cout << rand() << endl; // range [0 - 32000] > RAND_MAX [32000 - ]

    // cout << rand() % 10 << endl; // range [0 - 9] 

    cout << rand() % 23 + 2000 << endl; // range [2000 - 2023] 

}