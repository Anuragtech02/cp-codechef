#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, x, flag = 0;
    cin >> n >> h >> x;
    int timeZones[n];
    for (int i = 0; i < n; i++)
    {
        cin >> timeZones[i];
        if (timeZones[i] + x >= h)
        {
            flag = 1;
        }
    }
    flag ? cout << "YES" : cout << "NO";
}