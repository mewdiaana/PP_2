#include <iostream>
using namespace std;

int main(){
    string s, t; 
    int i, j, sum1, sum2, l;
    cin >> s>> t;
    sum1=0;
    sum2=0;
    int n=t.size();
    
    for(i=0; i<n; i++){
        int k=(int) t[i]; 
        sum1+=k;
    }

    for(j=0; j<s.size(); j++){
        for (l=j; l<n; l++){
            int d=(int) s[l]; 
            sum2+=d;
            break;
        }
    }
    
    cout<< sum1<< endl << sum2<< endl;
    if (sum1==sum2){
        cout<< "YES";
    }else {
        cout<< "NO";
    }
}