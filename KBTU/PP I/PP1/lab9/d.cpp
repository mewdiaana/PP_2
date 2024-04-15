#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> m;
    int n, k;
    cin >> n >> k;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        m[x]++;
    }
    int ans;
    for(map<int, int> :: iterator it = m.begin(); it != m.end(); it++){
        if((*it).first==k) ans = (*it).second;
    }
}
    