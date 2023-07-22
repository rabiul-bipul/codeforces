#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,n,sum=0;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

for(int i=0;i<n;i++)
{
    if(a[i]<=h)
    {
        sum+=1;
    }else
    {
        sum+=2;
    }
}
cout<<sum;




}
