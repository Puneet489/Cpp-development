class Solution
{

public:
    int reverse(int x)

    {

        int n, i, j;
        i = 0;
        while (x != 0)
        {

            n = x % 10;

            if ((i < -2147483648 / 10) || (i > 2147483647 / 10))
            {
                return 0;
            }
            x = x / 10;
            i = i * 10 + n;
        }

        return i;
    }
};