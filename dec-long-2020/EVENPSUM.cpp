#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        cout << (((a / 2) * (b / 2)) + ((a - (a / 2)) * (b - (b / 2)))) << "\n";
    }
    return 0;
}