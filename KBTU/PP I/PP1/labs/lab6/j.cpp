#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void max() {
    int a, b, c, d, i, max;
    cin>> a>>b>>c>>d;
    int o[4]={a,b,c,d};
    max=o[0];
    for(i=0; i<4; i++){
        if(o[i]>max){
            max=o[i];
        }
    }
    cout<<max;
}

int main() {
    max();
    return 0;
}