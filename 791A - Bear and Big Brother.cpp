#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,b,c=0;
    cin>>l>>b;

    while(l<b||l==b)
    {
        l*=3;
        b*=2;
        c++;
    }
    cout<<c;
}
