#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, j, i, count;
    cin >> n;
    i = 1;
    count = 0;

    while (i <= n)
    {

        j = 1;
        while (j <= n)
        {
            char x = 'A' + count;
            cout << x;
            count = count + 1;
            j++;
        }

        cout << endl;
        i++;
    }
}