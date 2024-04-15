#include <iostream>
#include <deque>

using namespace std;

int main(){

    deque <string> dq;
    int n, i;
    cin>>n;

    for(i=0; i<n; i++){
        int x;
        string s;
        cin>>x;

        if(x==1){
            cin>>s;
            dq.push_back(s);
        } else if(x==2){
            dq.pop_front();
        }
        if(dq.empty()){
            cout<<"queue is empty"<<endl;
        }else{
            for(deque<string>::iterator it = dq.begin(); it != dq.end(); it++){
                cout<< *it <<endl;
            }
        }
    }
}