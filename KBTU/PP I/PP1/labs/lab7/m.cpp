#include <iostream>
using namespace std;

void stop(int a, int n){
    if (a>n){
        return;
    }
    cout<<a<<" ";
    stop(a+1, n);
}

int main() {
    int n;
    cin>>n;
    stop(1, n);
    return 0;
}