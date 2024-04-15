#include <iostream>

using namespace std;

int main(){

    int n, m, i, j;
    cin>>n;
    int a[n][m];
    int pos=0, row=-1;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>>a[i1][i2];
        }
    }

    for(j=0; j<n; j++){
        int cnt=0;
        for(i=0; i<m; i++){
            if(a[i][j]>0){
                cnt++;
            }
        }

        if(cnt>pos){
            pos=cnt;
            pos=i+1;
        }

    }

    if (pos == 0) {
        cout << "No positive numbers found";
    } else {
        bool equalPositives = true;
        for (int i = 0; i < n; ++i) {
            int cnt = 0;

            for (int j = 0; j < m; ++j) {
                if (a[i][j] > 0) {
                    cnt++;
                }
            }

            if (cnt != pos) {
                equalPositives = false;
                break;
            }
        }

        if (equalPositives) {
            cout << "Numbers are equal";
        } else {
            cout << "Row with the most positives: " << row;
        }
    }


}