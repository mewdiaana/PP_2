#include <iostream>
using namespace std;
int main(){
    int n, e=0,o=0;
    cin>>n;
    int arr[n];
    for (int i=o; i<n;i++){
        cin >> arr[i];
        if (arr[i]%2==0){
            e++;
        } else{
            o++;
        }
    
    }
    cout<< e<<" "<< o;
}