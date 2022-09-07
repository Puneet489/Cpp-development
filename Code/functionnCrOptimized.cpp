#include <iostream>
using namespace std;

int factorial(int n)
{
    int i, a = 1;
    for (i = 1; i <= n; ++i)
    {
        a = a * i;
    }

    return a;
}

int ncr(int n, int r)
{
    int factn = factorial(n);
    int factr = factorial(r);
    int factnr = factorial(n - r);
    int ans = factn / (factr * factnr);
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, r, ans;
    cin >> n >> r;
    ans = ncr(n, r);
    cout << ans;
}