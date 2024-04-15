#include <iostream>

using namespace std;

int main(){

    int n, i, j;
    cin>>n;
    int a[n][n];
    int cnt=1;
    int y=n;

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(j+1==y){
                cout<<cnt<<" ";
                cnt++;
                y--;
            } else{
                cout<<" .  ";
            }
        }
        cout<<endl;
    }

}