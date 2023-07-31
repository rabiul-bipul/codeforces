#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,d;
    cin>>t;
    if(t%2==0)
    {
        cout<<t/2;
    }
    else
    {
        d=-(t/2+1);
        cout<<d;
    }
}
