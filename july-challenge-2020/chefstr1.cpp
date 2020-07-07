#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, sum = 0;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
            cin >> arr[i];
        for (int i = 0; i < a - 1; i++)
        {
            if ((abs(arr[i + 1] - arr[i])) == 2)
            {
                sum += 1;
            }
            else if ((abs(arr[i + 1] - arr[i])) == 1)
            {
                sum += 0;
            }
            else
            {
                sum += (arr[i + 1] - arr[i] - 1);
            }
        }
        cout << sum << "\n";
    }
    return 0;
}