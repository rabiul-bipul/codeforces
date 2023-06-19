#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,c=0;
    cin>>x;

    string s;
    cin>>s;


    for(int i=0; i<x; i++)
    {
        if(s[i]==s[i+1])
        {
            c++;
        }
    }


    cout<<c;
}
