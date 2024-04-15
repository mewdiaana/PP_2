#include <iostream>
#include <cmath>
using namespace std;

void big() {
    string s;
    cin>>s;
    int k;
    for(int i=0; i<s.size();i++){
        k=(int) s[i];
        if(k>=97 and k<=122){
            k=k-32;
        }}
    cout<<(char) k;
}

int main() {
    big();
    return 0;
}