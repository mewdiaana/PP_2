#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, string> log;
    int n, i;
    cin>>n;
    
    for(i=0; i<n; i++){
        string s1, s2;
        cin>>s1>>s2;
        log.insert(make_pair(s1,s2));
    }

    int m;
    cin>>m;

    for(i=0; i<m; i++){
        string t1, t2;
        cin>>t1>>t2;
        for(map<string, string> :: iterator it =log.begin(); it!=log.end(); it++){
            if(t1==(*it).first and t2==(*it).second){
                cout<<"correct password"<< endl;
                break;
            } else if(t1!=(*it).first and t2==(*it).second){
                cout<<"wrong login"<< endl;
                break;
            } else if(t1==(*it).first and t2!=(*it).second){
                cout<<"wrong password"<< endl;
                break;
            }else if(t1!=(*it).first and t2!=(*it).second){
                cout<<"error"<< endl;
                break;
            }
        }
    }
}