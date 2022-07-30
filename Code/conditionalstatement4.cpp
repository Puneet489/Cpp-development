#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a = 2;
    int b = a + 1;

    if ((a = 3) == b)
    {
        cout << a;
    }

    else
    {
        cout << a + 1;
    }
}