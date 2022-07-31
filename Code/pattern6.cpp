#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, i, j;
    cin >> n;
    i = 1;

    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            char x = 'A' + j - 1;
            cout << x;
            j++;
        }

        cout << endl;
        i++;
    }
}