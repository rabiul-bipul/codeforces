#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4];
    int c = 0;

    for(int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    int s = sizeof(a)/sizeof(a[0]);
    sort(a,a+s);
    for(int i = 0; i < 3; i++)
    {
        if(a[i] == a[i+1])
        {
            c++;
        }
    }
    cout << c;


}
