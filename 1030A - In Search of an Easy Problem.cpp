#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {
        cout<<"EASY";
    }else
    {
        cout<<"HARD";
    }

}
