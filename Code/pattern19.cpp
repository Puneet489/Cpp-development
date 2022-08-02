#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, i, k, j, l, m, count;
    cin >> n;
    i = 1;

    while (i <= n)
    {
        j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }

        k = 1;
        while (k <= i - 1)
        {
            cout << "*";
            k++;
        }

        l = 1;
        while (l <= i - 1)
        {
            cout << "*";
            l++;
        }

        m = 1;
        count = 0;
        while (m <= n - i + 1)
        {
            cout << n - i - count + 1;
            count++;
            m++;
        }

        ++i;
        cout << endl;
    }
}