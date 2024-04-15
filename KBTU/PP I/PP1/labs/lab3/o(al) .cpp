#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, i;
    cin>>n;
    int m[n];
    while (i<n)
    {
        cin>>m[i];
        i++;
    }
    for (int j=0; j<n; j++)
    {
        for (int i=0; i<n-1; i++)
        {
            if (m[i]>=m[i+1])
            {
                int a=m[i];
                m[i]=m[i+1];
                m[i+1]=a;
            }
        }
    }
    for (int i=n-1; i>=0; i--)
    {
        cout<<m[i]<<" ";
    }
    return 0;
}