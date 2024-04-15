#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Date {
    int d, m, y;
};

bool sorting(const Date &a, const Date &b){
    if(a.y != b.y){
        return a.y < b.y;
    } else if(a.m != b.m){
        return a.m <b.m;
    } else {
        return a.d < b.d;
    }
}

int main(){
    int d, m, y;
    vector<Date> dates;
    cin>>d>>m>>y;
    while((d!=0 or m != 0 or y != 0)){
        Date date = {d, m, y};
        dates.push_back(date);
        cin>>d>>m>>y;
    }

    sort(dates.begin(), dates.end(), sorting);

    for(int i = 0; i < dates.size(); i++){
        cout<< dates[i].d << " " << dates[i].m << " " << dates[i].y << endl;
    }

}