#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,pi,qi,res=0,d=0;
    cin>>n;


    for(int i=0;i<n;i++)
    {
        cin>>pi>>qi;
        d=qi-pi;
        if(d>=2)
        {
            res++;
        }

    }

    cout<<res;

}


