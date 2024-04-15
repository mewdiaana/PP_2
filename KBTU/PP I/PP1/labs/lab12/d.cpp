#include <iostream>
#include <string>
using namespace std;



int main() {
    int n;
    cin >> n ;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int max=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int gcd = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != max && max % a[i] == 0) {
            if (gcd < a[i]) {
                gcd = a[i];
            }
        }
    }

    cout<<gcd;
    return 0;
}
