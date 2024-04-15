#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin>>n;

    map<string, int> m;

    for(int i=0; i<n; i++){
        string x;
        int amount;
        cin>>x>>amount;
        m[x] += amount;
        
    }

    for(map<string, int> :: iterator it = m.begin(); it != m.end(); it++){
        cout<< (*it).first << " " << (*it).second << endl;
    }
}