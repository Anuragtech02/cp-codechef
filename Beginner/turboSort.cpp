#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << a[i];
    }

    return 0;
}