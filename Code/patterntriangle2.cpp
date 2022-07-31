#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, i, j;
    i = 1;
    cin >> n;

    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << i;
            j++;
        }

        cout << endl;
        i++;
    }
}