#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, B, M, count = 0, available = -1;
        cin >> N >> B >> M;
        for (int i = 0; i < M; ++i)
        {
            int a;
            cin >> a;
            if (a / B != available)
            {
                count++;
                available = a / B;
            }
        }
        cout << count << "\n";
    }
    return 0;
}