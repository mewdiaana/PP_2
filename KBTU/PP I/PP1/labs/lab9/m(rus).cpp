#include <string>
#include <iostream>
#include <map>
#include <algorithm>
#include <queue>

using namespace std;

int main(){

    queue<string> q;

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;

        if(a == 1){
            string name;
            cin >> name;
            q.push(name);
        }

        if(a == 2){
            q.pop();
        }

        if(q.empty()) cout << "queue is empty" << "\n";
        else cout << q.front() << "\n";
    }

}