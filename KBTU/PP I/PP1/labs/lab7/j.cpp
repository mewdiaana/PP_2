#include <iostream>
#include <cstring>
using namespace std;

void dig(){
    int n, sum=0;
    cin>>n;
    while(n>0){
        int d=n%10;
        n/=10;
        sum+=d/2;
    }
    cout<<sum;
}

int main() {
    dig();
    return 0;
}