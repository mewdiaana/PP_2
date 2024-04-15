#include <iostream>
using namespace std;

int main(){
    string s; 
    int i, j, k, l;
    cin >> s;
    l=0;
    k=0;
    int n=s.size();
    
    for(i=0; i<n; i++){
       if((int)s[i]==(int)s[n-i-1]){
            k++;
        } else{
            l++;
        }
    }

    if (l==0){
        cout<< "YES";
    }else {
        cout<< "NO";
    }
}