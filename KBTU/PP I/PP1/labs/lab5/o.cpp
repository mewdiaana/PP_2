#include <iostream>
using namespace std;

int main(){
    string s; 
    int i;
    cin >> s;
    char max=s[0];

    for(i=0; i<s.size(); i++){
        if(max<s[i]){
            max=s[i];
        }
    }
    cout << max; 
}