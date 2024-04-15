#include <iostream>
#include <cmath>
using namespace std;

void two() {
    int n;
    cin>>n;
    int a;
    bool s={false};
    for(a=0; a<=63; a++){
        int h=pow(2, a);
        if(h==n){
            s=true;
            break;
        }
    }
    if(s==true){
        cout<<"Yes";
    } else{
        cout<<"No";
    }
}

int main() {
    two();
    return 0;
}