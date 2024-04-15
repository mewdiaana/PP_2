#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
    int n;
    cin>>n;
    vector< pair<int, pair <int, int> > > year;

    for(int i=0; i<n; i++){
        int x, y, z;
        cin>> x>>y>>z;
        year.push_back(make_pair(x,(make_pair(y, z))));
    }

    sort(year.begin(), year.end());

    for(int i=0; i<year.size(); i++){
         cout << year[i].first << " " << year[i].second.first << " " << year[i].second.second << endl;
    }
}