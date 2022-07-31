#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, j, i;
    char ch;

    i = 1;

    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            ch = 'A' + i - 1;
            cout << ch;
            j++;
        }

        cout << endl;
        i++;
    }
}