#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b;
    char ch;

    cout << "Enter the two the numbers" << endl;
    cin >> a;
    cout << endl;
    cin >> b;
    cout << endl;
    cout << "Enter the operation" << endl;
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << (a + b) << endl;
        break;

    case '-':
        cout << (a - b) << endl;
        break;

    case '*':
        cout << (a * b) << endl;
        break;

    case '/':
        cout << (a / b) << endl;
        break;

    case '%':
        cout << (a % b) << endl;
        break;
    }
}