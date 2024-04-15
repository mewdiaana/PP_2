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
        if(k==48 or k==50 or k==52 or k==54 or k==56){
            l++;
        }
    }
    
    if(l==n){
        cout<<"Valid";
    } else{
        cout<<"Not valid";
    }
}

int main() {
    val();
    return 0;
}