#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, sum = 0, max = 0, x;
        cin >> a;
        vector<int> burners;
        for (int i = 0; i < a; i++)
        {
            cin >> x;
            burners.push_back(x);
        }
        for (int i = 0; i < a; i++)
        {
            sum += burners[i];
            if (burners[i] > max)
                max = burners[i];
        }
        if (a > 1)
        {
            if (max == 1)
            {
                switch (a)
                {
                case 2:
                    cout << "1"
                         << "\n";
                    break;
                case 3:
                case 4:
                    cout << "2"
                         << "\n";
                    break;
                }
            }
            else
                cout << ((sum / max) + (sum % max) + (a % 2 == 0 ? 0 : 1)) << "\n";
        }
        else
            cout << burners[0] << "\n";
    }
}