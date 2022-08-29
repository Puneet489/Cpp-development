#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int i, j;
    i = 0;

    if (n == 1)
    {
        cout << true;
    }
    else
    {
        while (n != 0)
        {
            j = n % 2;
            i++;
            n = n / 2;

            if (j != 0)
            {
                i = 0;
                break;
            }
            if (n == 1)
            {
                break;
            }
        }

        if (i != 0)
        {
            cout << 1;
        }

        else if (i == 0)
        {
            cout << 0;
        }
    }
}