#include <iostream>

using namespace std;

int main(){

    int n, cnt1=0, cnt2=0, cnt3=0, cnt4=0, cnt5=0, cnt6=0, cnt7=0, cnt8=0, cnt9=0;

    while(n!=0){
        cin>>n;

        if(n==1){
            cnt1++;
        }
        if(n==2){
            cnt2++;
        }
        if(n==3){
            cnt3++;
        }
        if(n==4){
            cnt4++;
        }
        if(n==5){
            cnt5++;
        }
        if(n==6){
            cnt6++;
        }
        if(n==7){
            cnt7++;
        }
        if(n==8){
            cnt8++;
        }
        if(n==9){
            cnt9++;
        }

    }
    cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<" "<<cnt4<<" "<<cnt5<<" "<<cnt6<<" "<<cnt7<<" "<<cnt8<<" "<<cnt9<<" ";
}