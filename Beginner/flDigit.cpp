#include <bits/stdc++.h>
using namespace std;

int firstDigit(int a)
{
    int temp;
    while (a)
    {
        temp = a % 10;
        a /= 10;
    }
    return temp;
}
int lastDigit(int a)
{
    return a % 10;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        long int sum = firstDigit(a) + lastDigit(a);
        cout << sum << endl;
    }
    return 0;
}