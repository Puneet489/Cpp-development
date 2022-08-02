#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, i, a = 0, b = 1, c;
    cin >> n;
    i = 1;
    cout << a << b;
    for (i = 1; i <= n - 2; i++)
    {
        c = a + b;
        cout << c;
        a = b;
        b = c;
    }
}