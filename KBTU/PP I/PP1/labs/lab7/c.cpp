#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void isx(){
    int n, i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    bool l={false};
    for(i=0;i<n;i++){
        if(a[i]==x){
          l=true;  
        } 
    }
    if(l==true){
        cout<<"Yes";
    } else{
        cout<<"No";
    }
}

int main(){
    isx();
    return 0;
}