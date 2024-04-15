#include <iostream>
using namespace std;

int main(){
    string s;
    int a, b, i;
    cin>>s>>a>>b;
    for(i=a; i<=b; i++){
        cout << (char) s[i];
    }
}