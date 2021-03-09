#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, max = 1;
        cin >> n;
        int a, b;
        // int d = log2(n);
        // cout << d << "\n";
        long long int dest = pow(2, (int(log2(n)) + 1));
        // cout << "\ndest" << dest << "\n";
        for (long int i = 1; i < dest; i++)
        {
            for (long int j = i; j < dest; j++)
            {
                if ((i ^ j) == n)
                {
                    long long int tempProd = i * j;
                    if (tempProd > max)
                    {
                        max = tempProd;
                        a = i;
                        b = j;
                    }
                }
            }
        }
        cout << max << "\n"
             << "a " << a << "b " << b << endl;
    }
}