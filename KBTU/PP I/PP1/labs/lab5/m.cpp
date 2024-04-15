#include <iostream>
using namespace std;

int main(){
    string s; 
    int i, a, l;
    l=0;
    char c;
    cin >> s>> c>> a;
    
    for(i=0; i<s.size(); i++){
        int k=(int) s[i];
        int d=(int) c;
        if(k==d){
            l++;
        }
    }
    
    if (a==l){
        cout<< "YES";
    }else {
        cout<< "NO";
    }
}