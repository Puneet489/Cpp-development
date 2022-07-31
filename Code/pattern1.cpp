#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, x, i;
    i = 1;
    x = 1;
    cin >> n;

    while (i <= n)
    {
        x = 1;
        while (x <= n)
        {
            cout << "*";
            x++;
        }

        cout << "\n";

        i++;
    }
}