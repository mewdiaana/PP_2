#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, i;
    cin>>n;
    vector <int> a(n);
    vector <string> s(n);
    for(i=0; i<n; i++){
        cin>>s[i];
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    sort(s.begin(), s.end());
    for(i=0; i<n; i++){
        cout<<s[i]<<" ";
        cout<<a[i]<<endl;
    }
    return 0;
}