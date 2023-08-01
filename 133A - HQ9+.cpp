#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int s=0;
    cin>>a;

    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='Q'||a[i]=='H'||a[i]=='9')
        {
            s++;
        }
    }
    if(s!=0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }



}
