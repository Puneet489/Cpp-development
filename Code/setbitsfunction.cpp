#include <iostream>
using namespace std;

int tobinary(int x)
{

    int i = 0, j;
    while (x != 0)
    {
        j = x % 2;
        if (j == 1)
        {
            i++;
        }
        x = x / 2;
    }

    return i;
}

int setbits(int x, int y)
{
    int num1, num2, ans;
    num1 = tobinary(x);
    num2 = tobinary(y);
    ans = num1 + num2;
    return ans;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int x, y, ans;
    cin >> x >> y;
    ans = setbits(x, y);
    cout << ans;
}