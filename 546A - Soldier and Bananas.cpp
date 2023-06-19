#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w,d=0,v=0;
    cin>>k>>n>>w;

    for(int i=1; i<=w; i++)
    {
        d+=k*i;
    }

    if(n>d)
    {
        cout<<v;
    }
    else
    {
      v=d-n;
      cout<<v;
    }

}
