#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t>>n;
    string s;
    cin>>s;


    for(int i=0; i<n; i++)
    {
        for(int j=0;j<s.size()-1;j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j],s[j+1]);
                j++;
            }
        }


    }
    cout<<s;



}
