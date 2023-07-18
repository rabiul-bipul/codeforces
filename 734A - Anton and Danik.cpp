#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int c=0,d=0,t;
    cin>>t;
    cin>>s;

    for(int i=0; i<t; i++)
    {
        
        if(s[i]=='A')
        {
            c++;
        }
        else
        {
            d++;
        }
    }

    if(c>d)
    {
        cout<<"Anton";
    }
    else if(d>c)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
}
