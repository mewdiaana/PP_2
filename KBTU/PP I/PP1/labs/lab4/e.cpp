#include <iostream>
using namespace std;

int main(){
    int n, i,k;
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int k=1; k<=i; k++){
            cout << "[*]";
        }
        cout << "\n";
    }
    return 0;
}