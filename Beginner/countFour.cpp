#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        int count = 0;
        cin >> a;
        while (a)
        {
            if (a % 10 == 4)
            {
                count++;
            }
            a /= 10;
        }
        cout << count << endl;
    }
}