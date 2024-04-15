#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void binary(){
    int n;
    cin>>n;
    if(n==0){
        cout<<"0";
    }
    int bin[32];
    int i=0;
    while (n > 0) {
        bin[i] = n % 2;
        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        cout << bin[j];
    }
}
int main(){
    binary();
    return 0;
}