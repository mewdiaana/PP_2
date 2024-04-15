#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int x;
    cin>> x;

    int min=1000;
    int d;
    for(int i=0; i< n; i++){
        if(min > abs(x-a[i])){
            min=abs(x-a[i]);
            d=a[i];
        }
    }
    cout<<d;
}