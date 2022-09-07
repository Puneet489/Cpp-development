#include <iostream>
using namespace std;

int fact(int x)
{
    int i, a;
    a = x;
    for (i = 1; i < a; ++i)
    {
        x = x * i;
    }

    return x;
}

int nCr(int n, int r)
{
    int nf, rf, nrf, ans;
    nf = fact(n);
    rf = fact(r);
    nrf = fact(n - r);
    ans = nf / (rf * nrf);
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
    ans = nCr(n, r);
    cout << ans;
}