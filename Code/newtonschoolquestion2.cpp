#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int i, t, n, count, l, z;
    cin >> t;

    for (i = 0; i < t; ++i)
    {
        count = 0;

        cin >> n;
        string arr;
        cin >> arr;

        for (l = 0; l < n; ++l)
        {
            if (arr[l] == '1')
            {
                count++;
            }
        }

        if (count == 0)
        {
            cout << "1";
        }
        else if (count % 2 == 0 && count != 2)
        {
            z = count;
            while (z % 2 == 0)
            {
                z = z / 2;
            }
            if (z == 1)
            {
                cout << "1";
            }

            else
            {
                cout << "0";
            }
        }

        else
        {
            cout << "0";
        }
    }
    return 0;
}