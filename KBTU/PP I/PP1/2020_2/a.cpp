#include <iostream> 

using namespace std;

int main(){
    int sum=0;
    int c1, c2, c5, c10, c20, c50, c100;
    cin>>c1>>c2>>c5>>c10>>c20>>c50>>c100;
    sum=c1+2*c2+5*c5+c10*10+c20*20+c50*50+c100*100;

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(sum-x >= 0){
            int t = x;
            int hundreds = min(t / 100, c100);
            t -= hundreds * 100;
            int fifties = min(t / 50, c50);
            t -= fifties * 50;
            int twenties = min(t / 20, c20);
            t -= twenties * 20;
            int tens = min(t / 10, c10);
            t -= tens * 10;
            int fives = min(t / 5, c5);
            t -= fives * 5;
            int twos = min(t / 2, c2);
            t -= twos * 2;
            int ones = min(t, c1);
            t -= ones;
            if (t > 0) {
                cout << "Transaction stopped!"<<endl;
                c100 -= hundreds;
                c50 -= fifties;
                c20 -= twenties;
                c10 -= tens;
                c5 -= fives;
                c2 -= twos;
                c1 -= ones;
            }
            else {
                cout << "Transaction accepted!"<<endl;
                sum=sum-x;
            }
        } else{
            cout << "Transaction stopped!"<<endl;
        }
    }

}