#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, sum =0 , a = 0, f = 0; 
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> f;
        sum= sum + f;
    }

    for(int i = 1; i <= 5; i++){

        if((sum+i) % (n+1) != 1 )
        {
            a++;
        }
    }

    cout << a;
    return 0;
}
