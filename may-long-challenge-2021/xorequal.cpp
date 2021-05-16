#include <bits/stdc++.h>
using namespace std;

unsigned long long power(unsigned long long x, unsigned long n)
{
    if (n == 0)
    {
        return 1;
    }

    unsigned long long pow = power(x, n >> 1);

    if (n & 1)
    {
        unsigned long long res = 1;
        res = (res * x) % 1000000007;
        res = (res * pow) % 1000000007;
        res = (res * pow) % 1000000007;
        return res;
    }

    unsigned long long res = 1;
    res = (res * pow) % 1000000007;
    res = (res * pow) % 1000000007;

    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        cout << power(2, n - 1) << "\n";
    }
}