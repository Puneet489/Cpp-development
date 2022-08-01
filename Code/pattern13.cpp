#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, i, j, k;
    cin >> n;
    i = 1;

    while (i <= n)
    {
        j = 1;
        k = 1;
        while (j <= i - 1)
        {
            cout << " ";
            j++;
        }

        while (k <= n - i + 1)
        {

            cout << "*";
            k++;
        }

        cout << endl;
        i++;
    }
}