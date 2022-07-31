#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int sum, n, i;
    sum = 0;
    i = 1;
    cin >> n;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    cout << sum;
}