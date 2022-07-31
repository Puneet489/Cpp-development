#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    char a;
    cin >> a;
    int ascii = a;
    if (ascii >= 97)
    {
        cout << "This is lower case";
    }

    else if (ascii < 97 && ascii > 64)
    {
        cout << "This is uppercase";
    }

    else if (ascii < 9 && ascii >= 0)
    {
        cout << "This is numeric";
    }
}