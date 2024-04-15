#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,k;
    cin>>n;
    int pr=0;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k==1 || k==-1){
            continue;
        }
        else if(k!=0){
            k=abs(k);
            int count=0;
            for(int j=2;j<k;j++){
                if(k%j==0){
                    count++;
                }
            }
            if(count==0){
                pr++;
            }
        }
    }
    cout<<pr;
}