#include <iostream>
#include <set>

using namespace std;    
    
int main(){
    int n;
    cin>>n;

    set<string> se;

    for(int i=0; i<n; ++i){
        string a;
        cin>>a;
        int oldSize = se.size();
        se.insert(a);
        if(oldSize==se.size()){
            cout<<"user already exists";
        } else cout<<"new user added";
    }

}