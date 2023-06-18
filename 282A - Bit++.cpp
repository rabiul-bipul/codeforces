#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0,v=0;
    string s;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(s=="++X"||s=="X++")
        {
            v++;
        }
        else
        {
            v--;
        }
    }
    cout<<v;
}
