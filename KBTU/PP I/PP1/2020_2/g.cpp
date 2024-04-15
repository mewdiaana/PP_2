#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int a){
    for(int i=2; i <= sqrt(a); i++){
        if(a%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    for(int i = 3; i < n; i++) {
        if (IsPrime(i) && IsPrime(n - i)){
            cout << i << ' ' << n - i;
            break;
        }
    }
}