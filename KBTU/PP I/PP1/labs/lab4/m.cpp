#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    int len = n;
    int k = 1;
    int p = 0;
    while(k <= n*n){
        for(int i = p; i < len; i++){
            arr[p][i] = k++;
        }
        for(int i = p+1; i < len; i++){
            arr[i][len-1] = k++;
        }
        for(int i = len - 2; i >= p; i--){
            arr[len-1][i] = k++;
        }
        for(int i = len-2; i > p; i--){
            arr[i][p] = k++;
        }
        p++; len = len -1;


    }

    for(int i = 0; i < n; i ++ ){
        for(int j = 0; j < n; j++){
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}