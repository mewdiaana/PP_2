#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x, y;
    x=3*n - 1;
    y=2*n-1;
    for(int i=0; i<n; i++){
        if(i==0){
            for(int j=0; j<x; j++){
                cout << " ";
            }
            cout<<"*"<< endl;
        }else if(i != n - 1){
            for(int j=0; j<x-i; j++){
            cout<< " ";
            }
            cout<< "*";
            for(int j=0; j<2*i-1; j++){
                cout<< " ";
            }
            cout<<"*" << endl;
        }
        else {
            for (int j = 0; j < 2 * n; j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * n - 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
        
    }
    for (int i=0;i<n; i++){
        if(i==0){
            for(int j=0; j<2*n - 1; j++){
                cout<<" ";
            }
            cout<<"*";
            for(int j=0; j<2*n - 1; j++){
                cout<<" ";
            }
            cout<<"*"<<endl;
        }else if(i != n - 1){
            for(int j=0; j<y-i; j++){
            cout<< " ";
            }
            cout<< "*";
            for(int j=0; j<2*i-1; j++){
                cout<< " ";
            }
            cout<<"*";
            for(int j=0; j<y-2*i; j++){
                cout<< " ";
            }
            cout<<"*" ;
            for(int j=0; j<2*i-1; j++){
                cout<< " ";
            }
            cout<<"*"<< endl;
        } else{
            for(int j=0; j<n;j++){
                cout<<" ";
            }
            for(int j=0; j<y; j++){
                cout<<"*";
            }
            cout<< " ";
            for(int j=0; j<y; j++){
                cout<<"*";
            }
            cout<<endl;
        }

    }
    for(int i=0; i<n; i++){
        if(i==0){
            for(int j=0; j<n-1; j++){
                cout<<" ";
            }
            cout<<"*";
            for(int j=0; j<y; j++){
                cout<<" ";
            }
            cout<<"*";
            for(int j=0; j<y; j++){
                cout<<" ";
                
            }
            cout<<"*"<<endl;
        }
        else if(i != n-1){
            for(int j=0; j<n-i-1; j++){
            cout<< " ";
            }
            cout<<"*";
            for(int j=0; j<2*i-1; j++){
            cout<< " ";
            }
            cout<<"*";
            for(int j=0; j<y-2*i; j++){
                cout<< " ";
            }
            cout<<"*" ;
            for(int j=0; j<2*i-1; j++){
                cout<< " ";
            }
            cout<<"*";
            for(int j=0; j<y-2*i; j++){
                cout<< " ";
            }
            cout<<"*" ;
            for(int j=0; j<2*i-1; j++){
                cout<< " ";
            }
            cout<<"*"<< endl;
        } else{
            for(int j=0; j<y; j++){
                cout<<"*";
            }
            cout<< " ";
            for(int j=0; j<y; j++){
                cout<<"*";
            }
            cout<< " ";
            for(int j=0; j<y; j++){
                cout<<"*";
            }

        }
    }
}