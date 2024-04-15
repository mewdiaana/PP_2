#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    vector<int> odd;
    vector<int> even;

    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            even.push_back(a[i]);
        } else{
            odd.push_back(a[i]);
        }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    reverse(even.begin(), even.end());

    for(int i=0; i<even.size(); i++){
        cout << even[i] << " "
    }
    for(int i=0; i<odd.size(); i++){
        cout << odd[i] << " "
    }
}