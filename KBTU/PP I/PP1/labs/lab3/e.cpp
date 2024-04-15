#include <iostream>
using namespace std;

int main(){
    long n, sum=0;
    cin >> n;
    long a[n];
    
    for (long i=0; i<n; i++){
        cin >> a[i];
        sum+=a[i];
    }
    cout << sum;
}