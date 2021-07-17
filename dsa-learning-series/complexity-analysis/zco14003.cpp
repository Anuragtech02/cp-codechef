#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    long long int budgets[n], max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> budgets[i];
    }
    sort(budgets, budgets + n);

    for (int i = 0; i < n; i++)
    {
        long long int curr = budgets[i] * (n - i);
        max = curr > max ? curr : max;
    }
    cout << max;
    return 0;
}