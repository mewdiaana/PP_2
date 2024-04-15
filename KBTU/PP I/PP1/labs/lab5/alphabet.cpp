#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    int i;
    cin >> s;
    int n = s.size();
    char c[n];

    for(i=0; i<n; i++){
        c[i]=s[i];
    }
    sort(c, c + n);
    cout << c;
}