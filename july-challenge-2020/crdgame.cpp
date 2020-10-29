#include <bits/stdc++.h>
using namespace std;

int digitSum(int a)
{
    int sum = 0;
    while (a)
    {
        sum += a % 10;
        a /= 10;
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int rounds, sumA = 0, sumB = 0;
        cin >> rounds;
        int a[rounds], b[rounds];
        for (int i = 0; i < rounds; i++)
        {
            int digitA = 0, digitB = 0;
            cin >> a[i] >> b[i];
            digitA = digitSum(a[i]);
            digitB = digitSum(b[i]);
            // while (a[i])
            // {
            //     digitA += a[i] % 10;
            //     a[i] /= 10;
            // }
            // while (b[i] > 0)
            // {
            //     digitA += b[i] % 10;
            //     b[i] /= 10;
            // }
            if (digitA > digitB)
                sumA++;
            else if (digitB > digitA)
                sumB++;
            else if (digitA == digitB)
            {
                sumA++;
                sumB++;
            }
        }
        if (sumA > sumB)
            cout << "0 " << sumA << "\n";
        else if (sumB > sumA)
            cout << "1 " << sumB << "\n";
        else
            cout << "2 " << sumA << "\n";
    }
}