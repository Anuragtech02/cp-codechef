#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int lead = 0, leader = 1, temp1 = 0, temp2 = 0;
    while (t--)
    {
        int player1, player2;
        cin >> player1 >> player2;
        temp1 += player1;
        temp2 += player2;
        if ((temp1 - temp2) > lead)
        {
            lead = temp1 - temp2;
            leader = 1;
        }
        else if ((temp2 - temp1) > lead)
        {
            lead = temp2 - temp1;
            leader = 2;
        }
    }
    cout << leader << " " << lead;
}