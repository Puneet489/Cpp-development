#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, i, j, count;
    cin >> n;
    i = 1;
    count = 1;

    while (i <= n)
    {
        j = 1;
        count = i;
        while (j <= i)
        {
            cout << count << " ";
            count = count + 1;
            j++;
        }

        cout << endl;
        i++;
    }
}