#include <iostream>
#include <string>
using namespace std;

void fact() {
    int n, s=1;
    cin>>n;
    while(n>0){
        s*=n;
        n=n-1;
    }
    cout<<s;
}

int main() {
    fact();
    return 0;
}