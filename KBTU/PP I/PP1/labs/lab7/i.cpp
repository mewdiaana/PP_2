#include <iostream>
#include <cstring>
using namespace std;

int sum(){
    int n;
    cin>>n;
    if (n==0){
        return n;
    } else{
        return n+sum();
    }
}

int main() {
    cout<< sum();

    return 0;
}