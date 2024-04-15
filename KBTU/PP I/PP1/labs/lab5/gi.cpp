#include <iostream>
using namespace std;

int main(){
    int m, n, i, j;
    string a, b; 
    cin>>a>> b;
    m=0;
    n=0;
    for (i=0; i<a.size(); i++){
        if(a[i]){
            m+=int(a[i]);
        }
    }
    for (j=0; j<b.size(); j++){
        if(b[j]){
            n+=int(b[j]);
        }
    }
    
    if (m==n){
        cout<< "YES";
    }else {
        cout<< "NO";
    }
}