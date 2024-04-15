#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long n; cin >> n;
    long a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    long m; cin >> m;
    long b[m];
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }

    long k = n + m;
    long c[k];
    for (int i = 0; i < k; i++){
        if(i < n) c[i] = a[i];
        else if(i >= n) c[i] = b[i - n];
    }

    sort(c, c + k);
    
    for(int i = 0; i < k; i++) 
        cout << c[i] << " ";
    
    return 0;
}