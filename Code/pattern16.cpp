#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, j, i, k, count;
    cin >> n;
    i = 1;

    while (i <= n)
    {
        j = 1;
        k = 1;
        count = 0;

        while (k < i)
        {
            cout << " ";
            k++;
        }

        while (j <= n - i + 1)
        {
            cout << i + count;
            j++;
            count++;
        }

        i++;
        cout << endl;
    }
}