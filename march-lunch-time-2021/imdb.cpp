#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        long int max = 0;
        for (int i = 0; i < n; i++)
        {
            long int s, r;
            cin >> s >> r;
            if (s <= x && r > max)
                max = r;
        }
        cout << max << "\n";
    }
}