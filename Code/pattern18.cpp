#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, j, i, k, l, count;
    cin >> n;
    i = 1;

    while (i <= n)
    {

        j = 1;
        while (j <= n - i)
        {
            cout << " ";
            ++j;
        }

        k = 1;
        while (k <= i)
        {
            cout << k;
            k++;
        }

        l = 2;
        count = 1;
        while (l <= i)
        {
            cout << i - count;
            l++;
            count++;
        }

        i++;
        cout << endl;
    }
}