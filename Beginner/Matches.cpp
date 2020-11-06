#include <bits/stdc++.h>
using namespace std;

int getSticks(int num)
{
    switch (num)
    {
    case 0:
    case 9:
        return 6;
    case 1:
        return 2;
    case 2:
    case 3:
    case 5:
        return 5;
    case 4:
        return 4;
    case 6:
        return 6;
    case 7:
        return 3;
    case 8:
        return 7;
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long int a, b, sticks = 0, sum = 0;
        cin >> a >> b;
        sum = a + b;
        while (sum)
        {
            sticks += getSticks(sum % 10);
            sum /= 10;
        }
        cout << "\n"
             << sticks;
    }
}