#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int s[t];

    for(int i=0; i<t; i++)
    {
        cin>>s[i];
    }

    for(int j=1; j<=t; j++)
    {
        for(int i=0; i<t; i++)
        {
            if(s[i]==j)
            {
                cout<<i+1<<" ";
            }
        }
    }


}
