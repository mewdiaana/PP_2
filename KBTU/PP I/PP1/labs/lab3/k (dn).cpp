#include <iostream>
using namespace std;
int main(){
    long n; cin >> n;
    long a[n];
    for (int i = 1; i <= n; i++){
            cin >> a[i];
    }    
    for (int i = 1; i <= n; i++){
        if(a[i] != a[i + 1]){
            cout << a[i] << ' ';
        }
    }
    return 0;
}