#include <iostream> 
using namespace std;

int main() {
    int a, b=0;
    cin>>a;
    int k[a];
    for (int i=0; i<a; i++){
        cin >> k[i];
        while (k[i]!= 0) {
            int h=k[i]%10;
            if (h==0){
                b++;
            }
            k[i]/=10;
        }
    }
    cout << b;
}