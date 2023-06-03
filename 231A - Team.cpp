#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    int arr[3];

    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int i=0; i<3; i++)
        {
            cin>>arr[i];
        }

        if(arr[0]==1&&arr[1]==1||arr[0]==1&&arr[2]==1||arr[1]==1&&arr[2]==1||arr[0]==1&&arr[1]==1&&arr[2]==1)
        {
            c++;

        }
        for(int i=0; i<3; i++)
        {
            arr[i]=0;
        }

    }
    cout<<c;
}

