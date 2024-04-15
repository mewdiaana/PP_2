#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void val() {
    string s;
    int i;
    cin>>s;
    int n=s.size();
    int l=0;
    for(i=0; i<n; i++){
        int k=(int) s[i];
        if(i%2==0){
            if(k>=97 and k<=122){
                k=k-32;
            }
        cout<< (char)k;
        } else{
            cout<< (char)k;
        }
    }
}

int main() {
    val();
    return 0;
}