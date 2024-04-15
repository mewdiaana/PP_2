#include <iostream>
using namespace std;

int main(){
    string s, t;
    int i, a=0;
    cin>>s>>t;
    for(i=0; i<s.size();i++){
        if(s.find(t)==i){
            a=1;
        }
    }
    if (a==1){
        cout<< "YES";
    }else {
        cout<< "NO";
    }
}
