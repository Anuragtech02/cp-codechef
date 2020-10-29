/*Author : ap0226*/
#include <bits/stdc++.h>
using namespace std;

void getNoOfSquares()
{
    int r, c, k;
    cin >> r >> c >> k;
    cout << (min(8, (r + k)) - max(1, (r - k)) + 1) * (min(8, (c + k)) - max(1, (c - k)) + 1) << "\n";
}

int main()
{
    int n;
    cin >> n;
    while (n--)
        getNoOfSquares();
    return 0;
}