#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double d;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        d+=a[i];
    }
    cout<<d/t;
}
