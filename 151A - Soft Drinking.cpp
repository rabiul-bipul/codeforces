#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np ;

    int totalDrink = k * l;
    int toast = totalDrink / nl;
    int limes = c * d;
    int salt = p / np;
    int m1 = min(toast,limes);
    int m2 = min(m1,salt);
    int result = m2 / n;

    cout << result;
   
}
