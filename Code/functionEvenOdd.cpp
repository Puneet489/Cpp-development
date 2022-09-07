#include <iostream>
using namespace std;

bool EvenOdd(int n)
{
    int a = n;
    if (a % 2 == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    bool ans;
    cin >> n;
    ans = EvenOdd(n);
    cout << ans;
}