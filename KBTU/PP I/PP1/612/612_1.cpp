#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isOdd(int a) {
    if(a % 2 == 1){
        return true;
    }
    return false;
}

int my_count_if(vector<int> :: iterator begin, vector<int> :: iterator end){
    int cnt = 0;
    while(begin != end){
        if(isOdd(*begin)){
            begin++;
        }
    }
    return cnt;
    // the process/ cycle of function count_if
}

int main(){

    int a[5]={3, 5, 2, 8, 10};
    vector <int> v(a, a + 5); // el-ts from first el-t of array to the last go to the vector

    //int res = count_if(v.begin(), v.end(), isOdd); // counting using el-ts of v, if isOdd f-n works

    //cout<<res<<endl;

    int res2= my_count_if(v.begin(), v.end());

    cout<<res2;

}