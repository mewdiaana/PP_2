#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    string str;
    int sum = 0;
    cin >> str;
    
    for (int i=0; i<str.size(); i++) {
        int k=(int) str[i];
        sum+=k;
    }

    if(sum<=300){
        cout<<"Oh, no!";
    } else{
        cout<<"It is tasty!"; 
    }

    return 0;
}