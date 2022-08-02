#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, i, j, k, count;
    cin >> n;
    i = 1;
    count = 1;

    while (i <= n)
    {
        j = 1;
        k = 1;
        while (j <= n - i)
        {
            cout << " ";
            ++j;
        }

        while (k <= i)
        {
            cout << count;
            count++;
            k++;
        }

        i++;
        cout << endl;
    }
}