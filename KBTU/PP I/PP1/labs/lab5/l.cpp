#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool alphabet(string s){
    int i;
    for(i=1; i<s.size(); i++){
        if(s[i]<s[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    string s; 
    cin >> s;

    if (alphabet(s)){
        cout<< "YES";
    } else {
        cout<< "NO";
    }
    
}