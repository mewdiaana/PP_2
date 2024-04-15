#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void hyp() {
    int a, b;
    cin>>a>>b;
    double c;
    c=sqrt(pow(a,2)+pow(b,2));
    cout<<setprecision(4)<<c ;
}

int main() {
    hyp();
    return 0;
}