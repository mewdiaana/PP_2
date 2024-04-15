#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void val() {
    string s;
    getline(cin,s);
    int n=s.size();
    int i;
    for(i=0;i<n;i++){
        int k=(int)s[i];
        if(k!=65 and k!=69 and k!=73 and k!=79 and k!=85 and k!=97 and k!=101 and k!=105 and k!=111 and k!=117){
            cout<<(char)k;
        }
    }
}

int main() {
    val();
    return 0;
}