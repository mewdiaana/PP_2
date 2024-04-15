#include <iostream> 
#include <stack>

using namespace std;

int main(){
    int n, ind=0;
    cin>>n;
    int a[n];
    int max = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]>=max){
            max=a[i];
            ind=i;
        }
    }
    if (ind == n - 1) {
        cout << 1;
        return 0;
    }
    stack<int> st;
    st.push(a[ind + 1]);
    int ans = 2;
    for (int i = ind + 1; i < n; i++) {
        ans = 2;
        while(i < n && st.top() >= a[i]) {
            if (st.top() == a[i]) {
                i++;
                continue;
            }
            else {
                st.push(a[i]);
                ans++;
                i++;
            }
        }
    }
    cout << ans;
}