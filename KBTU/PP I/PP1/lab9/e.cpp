#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, int> m;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        m[s]++;
    }
    int answ = 0;
    for(map<string, int> :: iterator it = m.begin(); it != m.end(); it++){
        if((*it).second == 3) answ++;
    }
    cout<<answ;
}