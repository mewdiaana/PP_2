#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

int main(){
    int days, i; 
    float sum = 0;
    map <string, int> counts;
    cin>>days;
    for (i = 0; i < days; i++){
        int c;
        cin >> c;
        for (int j = 0; j < c; j++){
            string cityname;
            int count;
            cin >> cityname >> count;
            counts[cityname] += count;
            sum += count;
        }
    }
    
    for (auto c : counts)
        cout << c.first << ' ' << c.second / sum * 100 << endl;

    return 0;
}