#include <bits/stdc++.h>
using namespace std;

long int digitSum(long int a)
{
    long int sum = 0;
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
            long int a, b, digitA = 0, digitB = 0;
            cin >> a >> b;
            digitA = digitSum(a);
            digitB = digitSum(b);
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