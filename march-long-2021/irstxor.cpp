#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int dest = pow(2, (int(log2(n)) + 1));
        long long a = (dest / 2) - 1, b = a ^ n;
        cout << a * b << "\n";
    }
}