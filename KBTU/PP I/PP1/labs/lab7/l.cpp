#include <iostream>
#include <string>
using namespace std;

bool pal(string n, int le, int ri){
    if (le >= ri) {
        return true;
    }
    if (n[le] != n[ri]) {
        return false;
    } else {
        return pal(n, le + 1, ri - 1);
    }
}

int main() {
    string n;
    cin>>n;
    int a=n.size();
    if(pal(n, 0, a-1)==true){
        cout << "Yes";
    } else{
        cout << "No";
    }
}