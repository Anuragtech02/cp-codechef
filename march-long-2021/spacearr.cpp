#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0, currTotal = 0;
        cin >> n;
        int series[n];
        for (int i = 0; i < n; i++)
        {
            cin >> series[i];
        }
        sort(series, series + n);
        for (int i = 0; i < n; i++)
        {
            if (series[i] > (i + 1))
                flag = 1;
            currTotal += series[i];
        }
        if (!flag)
        {
            int nTotal = n * (n + 1) / 2;
            if ((nTotal - currTotal) % 2)
                cout << "First\n";
            else
                cout << "Second\n";
        }
        else
            cout << "Second\n";
    }
}