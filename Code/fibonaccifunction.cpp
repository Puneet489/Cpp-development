#include <iostream>
using namespace std;

void fibonacci(int x)
{

    int a = 0, b = 1, c, i;
    cout << a << endl;
    cout << b << endl;

    for (i = 0; i < x; i++)
    {
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int x;
    cin >> x;
    fibonacci(x);
}