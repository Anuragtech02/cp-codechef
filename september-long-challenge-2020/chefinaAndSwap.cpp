#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        for (int i = 1; i < a; i++)
        {
            if (i * (i + 1) == a * (a + 1) / 2)
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}