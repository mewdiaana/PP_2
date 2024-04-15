#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void power(){
    int a;
    cin>>a;
    if(a>=0 and a<=30){
        cout<<setprecision(10)<<pow(2,a);
    }
}
int main(){
    power();
    return 0;
}