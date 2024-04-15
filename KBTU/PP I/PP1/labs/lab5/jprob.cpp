#include <iostream>
using namespace std;

bool Pol(string s)

int main(){
    string s; 
    int i, j, k, l, d;
    int sum=0;
    int sum2=0;
    cin >> s;
    int n=s.size();
    l=n/2+1;

    for(i=0; i<l; i++){
       k=(int) s[i];
       sum+=k;
    }

    for(i=0; i<n; i++){
       d=(int) s[n-l-i];
       sum2+=d;
    }

    cout<< sum<< endl << sum2<< endl;
    int a=(int) s[0];
    int f=sum2+a;

    if (sum==f){
        cout<< "YES";
    }else {
        cout<< "NO";
    }
}