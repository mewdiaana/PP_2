#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    //unique - neighobouthood el-ts not the same
    // 1, 1, 3, 3, 2, 9, 2, 10
    // 1 and 1 equal, wom't get 1
    // 1 and 3 not equal - take 1
    // 1 3 2 9 2 10 - output


    int a[8]={1, 1, 3, 3, 2, 9, 2, 10};
    vector <int> v(a, a + 8); 

    vector <int> :: iterator uniq_end = unique(v.begin(), v.end());
    vector <int> :: iterator it = v.begin();

    while(it != uniq_end){
        cout<< *it << " ";
        it++;
    }

}