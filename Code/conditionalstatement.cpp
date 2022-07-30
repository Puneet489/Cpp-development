#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a;
    cin >> b;

    if (b < a)
    {
        cout << "A is greater than B" << endl;
    }

    else
    {
        cout << "A is less than equal to B" << endl;
    }
}