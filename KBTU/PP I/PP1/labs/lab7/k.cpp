#include <iostream>
#include <string>
using namespace std;

void dig(){
    string n; 
    int max=0;
    cin>>n;
    for (char digit : n) {
        if(digit - '0' > max){
            max=digit - '0';
        }
    }
    cout<< max;
}

int main() {
    dig();
    return 0;
}