#include<iostream>
using namespace std;

int main()
{
    int stops,capacity;
    cin >> stops;
    int exit, enter, sum = 0, k = 0;

    for(int i = 0; i < stops; i++)
    {
        
        cin >> enter >> exit;
        sum = (enter + k) - exit;
        if(sum < 0)
        {
            k = 0;
        }
        else
        {
    k = sum;
        }
    }
    cout << sum;

    
}
