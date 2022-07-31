#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, i, j, count;
    cin >> n;
    i = 1;

    while (i <= n)
    {
        j = 1;
        count = i;
        while (j <= i)
        {
            cout << count;
            count = i - j;
            j++;
        }

        cout << endl;
        i++;
    }
}