#include <bits/stdc++.h>
using namespace std;

long int power(int base, unsigned long exp)
{
    long int res = 1;

    while (exp)
    {
        if (exp & 1)
        {
            res *= base;
        }

        exp = exp >> 1;

        base = base * base;
    }

    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int k;
        cin >> k;
        unsigned long long res = 0;
        for (long i = 1; i <= (2 * k) + 1; i++)
        {
            // res += __gcd((k + power(i, 2)), (k + power(i + 1, 2)));
            cout << (k + power(i, 2)) << endl;
        }
        cout << res << "\n";
    }
    return 0;
}