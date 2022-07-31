#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, i, a;
    cin >> n;
    i = 2;

    if (n == 2)
    {
        cout << "This is a prime number";
    }

    else
    {
        while (i < n)
        {
            if (n % i == 0)
            {

                a = 1;
            }

            i++;
        }

        if (a == 1)
        {
            cout << "Non Prime";
        }

        else
        {
            cout << "Prime";
        }
    }
}