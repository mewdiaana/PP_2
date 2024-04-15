#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib> // random generate f-n
#include <time.h> // time(0)

using namespace std;

void show(int a){
    cout << a << endl;  
}

int gen(){
    return rand() % 23 + 2000; 
}

int main(){

    //generate

    vector<int> v(5);
    generate(v.begin(), v.end(), gen);

    for_each(v.begin(), v.end(), show);

}