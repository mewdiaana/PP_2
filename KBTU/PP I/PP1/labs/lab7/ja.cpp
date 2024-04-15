#include <iostream>
#include <cstring>
using namespace std;

int dig(int n){
    if (n<10){
        return n/2;
    }
    return (dig(n/10)+n%10/2);
}

int main() {
    int n;
    cin>>n;
    cout<<dig(n);
    return 0;
}