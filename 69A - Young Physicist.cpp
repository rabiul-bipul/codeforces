#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,sumx=0,sumy=0,sumz=0;
    cin>>a;

    int A[100][100];
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>A[i][j];
        }
        sumx+=A[i][0];
        sumy+=A[i][1];
        sumz+=A[i][2];

    }
    if(sumx==0&&sumy==0&&sumz==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


}
