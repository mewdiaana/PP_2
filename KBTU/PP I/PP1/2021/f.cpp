#include <iostream>

using namespace std;

int substr(string s, int a, int b){
    char k='@';
    char l='.';

    for(int i=0; i<s.size(); i++){
        if(s[i]==k){
           a=i; 
        } else if(s[i]==l){
            if(i==s.size()){
                b=0;
            } else{
                b=i;
            }
        }
    }
}

int main(){

    int a, b;
    string s;
    cin>>s;

    substr(s, a, b);

    if(a<b){
        cout<<"Yes";
    } else{
        cout<<"No";
    }
}