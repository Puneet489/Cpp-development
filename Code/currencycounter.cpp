#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, c, f, t, d, i;
    cin >> n;
    i = 0;
    c = n / 100;
    n = n - (c * 100);

    switch (i)
    {

    case 0:
        cout << "You require " << c << " hundred rupee notes\n";
        i++;

    case 1:
        f = n / 50;
        cout << "You require " << f << " fifty rupee notes\n";
        n = n - (f * 50);
        i++;

    case 2:
        t = n / 20;
        cout << "You require " << t << " twenty rupee notes\n";
        n = n - (t * 20);
        i++;

    case 3:
        d = n / 1;
        cout << "You require " << d << " one rupee notes\n";
    }
}