#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin>>n;
    string s1[n];
    int a1[n];
    string s2[n];
    int a2[n];
    int cnt=0;
    for(int i=0; i<n;i++){
        cin>>s1[i]>>a1[i];
        cin>>s2[i]>>a2[i];
    }

    for(int i=0;i<n;i++){
        int sum=0;
        bool t=true;
        if(i==n-1){
            if(s1[i]=="" && s2[i]==""){
                t=false;
                break;
            }
        }
        for(int j=i+1; j<n;j++){
            if(s1[i]=="" && s2[i]==""){
                t=false;
                break;
            }
            else if((s1[i]==s1[j] && s2[i]==s2[j]) && (a1[i]==a1[j] && a2[i]==a2[j])){
                s1[j]="";
                s2[j]="";
            }
        }
        if(t){
            cnt++;
        } 
    }

    string str[cnt];
    int summer[cnt];
    string strSort[cnt];
    int id=0;

    for(int i=0;i<n;i++){
        int sum=0;
        bool t=true;
        if(i==n-1){
            if(s1[i]=="" && s2[i]==""){
                t=false;
                break;
            }
        }
        for(int j=i+1; j<n;j++){
            if(s1[i]=="" && s2[i]==""){
                t=false;
                break;
            }
            else if((s1[i]==s1[j] && s2[i]==s2[j]) && (a1[i]==a1[j] && a2[i]==a2[j])){
                s1[j]="";
                s2[j]="";
            }
        }
        if(t){
            summer[id]=a1[i]+a2[i];
            strSort[id]=s1[i]+" and "+s2[i];
            str[id]=s1[i]+" and "+s2[i];
            id++;
        } 
    }

    sort(strSort, strSort+cnt);
    for(int i=0;i<cnt;i++){
        for(int j=0; j<cnt;j++){
            if(strSort[i]==str[j]){
                cout<<str[j]<<" "<<summer[j];
                str[j]="";
                break;
            }
        }cout<<endl;
    }
    return 0;
}