#include <iostream>
using namespace std;

int main(){
    string s; 
    int i, vowel;
    vowel=0;
    cin >> s;
    
    for(i=0; i<s.size(); i++){
        int k=(int) s[i];
        if(k==97 or k==101 or k==111 or k==117 or k==105){
            vowel++;
        }
    }

    cout<< vowel;
}