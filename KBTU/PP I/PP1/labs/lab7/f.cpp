#include <iostream>
#include <cmath>
using namespace std;

void even() {
    int n, d; 
    int e=0;
    cin>>n;
    while(n>0){
        d=n%10;
        n /=10;
        if(d%2==0 and d<100){
            e++;
        }
    }
    cout<<e;
}

int main() {
    even();
    return 0;
}