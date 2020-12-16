#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d1, d2, v1, v2, p;
        cin >> d1 >> v1 >> d2 >> v2 >> p;
        int count = 0, sum = 0;
        if (d1 == d2)
        {
            count = (d1 != 1) ? (d1 - 1) : 0;
            while (sum <= p)
            {
                sum += (v1 + v2);
                count++;
            }
            cout << count << "\n";
        }
        else
        {
            if (d1 != 1 || d2 != 1)
            {
                count = d1 > d2 ? d2 - 1 : d1 - 1;
            }
            if ((d1 < d2) && v1 >= p)
            {
                cout << d1 << "\n";
            }
            else if ((d2 < d1) && v2 >= p)
            {
                cout << d2 << "\n";
            }
            else
            {
                count += d1 > d2 ? d1 - d2 : d2 - d1;
                sum = d1 > d2 ? v2 * (d1 - d2) : v1 * (d2 - d1);
                if (sum < p)
                {
                    while (sum < p)
                    {
                        sum += v1 + v2;
                        count++;
                    }
                }
                else if (sum > p)
                {
                    while (sum > p)
                    {
                        sum -= d1 > d2 ? v2 : v1;
                        if (!(sum <= p))
                            count--;
                    }
                }
                cout << count << "\n";
            }
        }
    }
}