#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    int i;
    cin>>s>>t;

    for(i=0; i<s.size(); i++)
    {
        s[i]=tolower(s[i]);
        t[i]=tolower(t[i]);
    }

    if(s==t)
    {
        cout<<"0";
    }
    else
    {
        for(i=0; i<s.size(); i++)
        {
            if(s[i]<t[i])
            {
                cout<<"-1";
                break;
            }
            if(s[i]>t[i])
            {
                cout<<"1";
                break;
            }


        }
    }
}
