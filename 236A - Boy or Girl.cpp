#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i,v=0;
    cin>>s;
    sort(s.begin(),s.end());

    for(i=0; i<s.size(); i++)
    {

        if(s[i]!=s[i+1])
        {
            v++;
        }
    }
    if(v%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<< "IGNORE HIM!";
    }

}
