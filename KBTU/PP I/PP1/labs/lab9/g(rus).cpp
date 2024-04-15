#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>

using namespace std;


int main() {

    deque<int> queue1;

    string s;
    getline(cin, s);

    for (auto c : s) {
        int a = c - '0';

        if(a == 0) {
            queue1.push_back(0);
            continue;
        }

        if(queue1.empty()){
            queue1.push_back(a);
            continue;
        }

        if(queue1.back() == 1){
            queue1.pop_back();
            continue;
        }


        queue1.push_back(1);

    }

    while(!queue1.empty()){
        cout << queue1.front() << "";
        queue1.pop_front();
    }
}