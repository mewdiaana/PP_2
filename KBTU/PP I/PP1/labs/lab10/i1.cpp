#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(n%2==0){
            if(arr[i]!=arr[n-(i+1)]){
                cout<<"Instead of "<<arr[i]<<" here was "<<arr[n-(i+1)];
            }
            else {
                cout<<"OK";
            }
        }
        else{
            if(i==n/2){
                cout<<"OK";
            }
            else if(arr[i]!=arr[n-(i+1)]){
                cout<<"Instead of "<<arr[i]<<" here was "<<arr[n-(i+1)];
            }
            else{
                cout<<"OK";
            }
        }
        cout<<endl;
    }
}