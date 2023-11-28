#include<iostream>
using namespace std;

bool is_prime(int a)
{
    for(int i = 2; i*i <= a; i++)
    {
        if(a % i == 0 )
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int temp = 0;

    for(int i = a+1; i;i++)
    {
        if(is_prime(i))
        {
            temp = i;
            break;
        }
    }
    if (b == temp)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
}
