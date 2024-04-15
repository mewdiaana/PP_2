#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void val() {
    string s;
    cin>>s;
    int n=s.size();
    int m, i;
    cin>>m;
    int l=0;
    for(i=0;i<n;i++){
        int k=(int)s[i];
        if(k>=48 and k<=57){
            l++;
        }
    }
    if(l>=m){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
}

int main() {
    val();
    return 0;
}