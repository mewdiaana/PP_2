#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin>>n;

    for(int i=0; i<=n;i++){
        long long int a=1;

        if(i!=0){
            for(int j=0; j<i;j++){
                a*=i;
            }
        }

        cout<<a<<' ';
    }
    
    return 0;
}