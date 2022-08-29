#include <iostream>
using namespace std;

int power(int a, int b)
{

    int i, n;
    i = b;
    n = 1;
    while (i != 0)
    {
        n = n * a;
        i--;
    }

    return n;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b, n;
    cin >> a;
    cin >> b;

    n = power(a, b);

    cout << n;
}
