#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=1;
    cin>>t;

    int s[t];

    for(int i=0; i<t; i++)
    {
        cin>>s[i];
    }


    for(int i=0; i<t-1; i++)
    {
        if(s[i]!=s[i+1])
        {
            c++;
        }
    }
    cout<<c;


}
