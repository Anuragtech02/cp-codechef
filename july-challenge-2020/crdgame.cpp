#include <bits/stdc++.h>
using namespace std;

int digitSum(long int a)
{
    int sum = 0;
    while (a > 0)
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
        while (rounds--)
        {
            long int a, b;
            int digitA = 0, digitB = 0;
            cin >> a >> b;
            digitA = digitSum(a);
            digitB = digitSum(b);
            if (digitA > digitB)
                sumA++;
            else if (digitB > digitA)
                sumB++;
            else
            {
                sumA++;
                sumB++;
            }
        }
        if (sumA > sumB)
            cout << "\n0 " << sumA;
        else if (sumB > sumA)
            cout << "\n1 " << sumB;
        else
            cout << "\n2 " << sumA;
    }
}