#include <iostream>
using namespace std;

int main(){
    string s; 
    int i;
    cin >> s;
    
    for(i=0; i<s.size(); i++){
        int k=(int) s[i];
        if(k>=97 and k<=122){
            k=k-32;
        }
        cout<< (char)k;
    }
    cout<< endl;
}