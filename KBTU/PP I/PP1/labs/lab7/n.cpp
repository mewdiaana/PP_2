#include <iostream>
#include <algorithm>
using namespace std;

void cheater(){
    int n, k, i;
    cin>>n>>k;
    int a[n];

    for(i=0;i<n; i++){
        cin>>a[i];
    }

    sort(a, a + n);

    int l=0;

    for(i=0;i<n; i++){
        if(a[i+1]-a[i]<=k){
            l++;
        }
    }

    if(l>0){
        cout<<"cheater";
    } else{
        cout<<"no";
    }
}

int main() {
    cheater();
    return 0;
}