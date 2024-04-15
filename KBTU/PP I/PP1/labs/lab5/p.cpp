#include <iostream>
using namespace std;

int main(){
    string s;
    int i;
    cin>>s;
    for(i=0; i<s.size(); i++){
        int k=(char) s[i];
        if(k!='z'){
            char a=k+1;
            cout<< a;
        } else if(k='z'){
            cout<< "a";
        } 
    }
    
}