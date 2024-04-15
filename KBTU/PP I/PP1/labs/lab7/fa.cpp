#include <iostream>
#include <string>
using namespace std;

void even() {
    string n;
    cin >> n;
    int e = 0;

    for (char digit : n) {
        if((digit - '0')%2==0){
            e++;
        }
    }

    cout << e;
}

int main() {
    even();
    return 0;
}
