#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, sum, i;
    i = 1;
    cin >> n;
    sum = 0;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    cout << sum;
}