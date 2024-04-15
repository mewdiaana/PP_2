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
    long int max=m[0];
    for (int i=0;i<n;i++)
    {
        if (m[i] > max)
        {
            max=m[i];
        }
    }
    long int min=m[0];
    for (int i=0;i<n;i++)
    {
        if (m[i] < min)
        {
            min=m[i];
        }
    }
    for (int i=0;i<n;i++)
    {
        if (m[i]==max)
        {
            m[i]=min; 
        }
        cout<<m[i]<<" ";
    }
    return 0;
}