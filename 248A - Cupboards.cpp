#include <iostream>
using namespace std;

void cupBoard(int n)
{
    int d1,d2,d10 = 0, d11 = 0, d20 = 0, d21 =0;
    while(n--)
    {
        cin >> d1 >> d2;

        if(d1 == 0)
        {
            d10++;
        }
        else
        {
            d11++;
        }

        if(d2 == 0)
        {
            d20++;
        }
        else
        {
            d21++;
        }
    }
    int res = min(d10, d11) + min(d20, d21);
    cout << res;
}

int main()
{
    int n;
    cin >> n;
    cupBoard(n);
}
