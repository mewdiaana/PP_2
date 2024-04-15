#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> doramas;

    for (int i = 0; i < n; ++i) {
        string name;
        int episodes;
        cin >> name >> episodes;

        if(doramas.find(name) == doramas.end()){
            doramas[name] = episodes;
        }
        else{
            doramas[name] += episodes;
        }
    }

    for (map<string, int> :: iterator it = doramas.begin(); it != doramas.end(); it++){
        cout << it->first << " " << it->second << "\n";
    }

}