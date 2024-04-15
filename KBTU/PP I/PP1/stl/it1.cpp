#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(){

    //vector<int> v;

    int a[] = {4, 5, 6};

    cout << a[1] << endl; 

    // берем адресс массива через название "а", то есть его 0 элемент, и передвигаемся на 1 элемент
    cout << *(a + 1) << endl;


}
// -std=c++11
