#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a;

    cout << "Enter the value of a" << endl;
    cin >> a;

    if (a > 0)
    {
        cout << "The number is positive" << endl;
    }

    if (a < 0)
    {
        cout << "The number is negative" << endl;
    }

    else
    {
        cout << "The number is zero" << endl;
    }
}