#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, j, i;
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n - i + 1)
        {

            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}