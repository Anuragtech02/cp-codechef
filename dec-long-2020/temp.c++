#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int i = 0, j = 0, temp = 0;
        int d1, d2, v1, v2, p;
        cin >> d1 >> v1 >> d2 >> v2 >> p;

        if (min(d1, d2) > 1)
            temp = min(d1, d2) - 1;

        for (j = 0; j < max(d1, d2) - min(d1, d2); j++)
            if (p > 0)
            {
                if (d1 > d2)
                {
                    p = p - v2;
                }
                else
                {
                    p = p - v1;
                }
            }
            else
                break;

        while (p > 0)
        {
            i++;
            p = p - (v1 + v2);
        }

        cout << i + j + temp << "\n";
    }
}