#include <iostream>
using namespace std;

int main(){
    int odd, even, i;
    string a; 
    cin>>a;
    odd=0;
    even=0;
    for (i=0; i<a.size(); i++){
        if (i%2==0){
            even+=int(a[i]);
        } else if (i%2==1){
            odd+=int(a[i]);
        }
    }

    if (even==odd){
        cout<< "YES";
    }else {
        cout<< "NO";
    }
}