#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        float count = 0, d;
        cin >> n >> d;
        int age[n];
        for (int i = 0; i < n; i++)
        {
            cin >> age[i];
            if (age[i] >= 80 || age[i] <= 9)
                count++;
        }
        if (d == 1)
            cout << n << "\n";
        else
        {
            ans += ceil(count / d) + ceil((n - count) / d);
            cout << ans << "\n";
        }
    }
    return 0;
}