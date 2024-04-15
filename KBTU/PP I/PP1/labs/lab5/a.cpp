#include <iostream>
using namespace std;

int main(){
    string s; 
    int i, small, big;
    small=0;
    big=0;
    cin >> s;
    
    for(i=0; i<s.size(); i++){
        int k=(int) s[i];
        if(k>=65 and k<=90){
            big++;
        }
        if(k>=97 and k<=122){
            small++;
        }
    }

    cout<< small <<" "<< big;
}