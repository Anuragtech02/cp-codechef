#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0, res = 0;
        cin >> n;
        int series[n];
        for (int i = 0; i < n; i++)
        {
            cin >> series[i];
        }
        if (n == 1)
        {
            flag = 1;
            res = 1;
        }
        else
        {
            while (!flag)
            {

                // cout << "First : " << series[0] << " Second " << series[1] << "\n";
                if (series[0] > n)
                {
                    flag = 1;
                    res = 2;
                }
                else if (series[1] > n)
                {
                    flag = 1;
                    res = 1;
                }
                for (int i = 0; i < n; i++)
                {
                    series[i] += 1;
                    // cout << series[i] << " ";
                }
            }
        }

        if (res == 1)
            cout << "First\n";
        else if (res == 2)
            cout << "Second\n";
    }
}   