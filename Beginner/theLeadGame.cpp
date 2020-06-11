#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int player1, player2, lead = 0, i = 0, leader;
    long int allLead = 0;
    while (i++ < t)
    {
        cin >> player1 >> player2;
        leader = 1; //assuming player 1 is leader
        lead = player1 > player2 ? player1 - player2 : player2 - player1;
        if (lead > allLead)
        {
            allLead = lead;
            if (player1 > player2)
            {
                leader = 1;
            }
            else
            {
                leader = 2;
            }
        }
    }
    cout << leader << " " << allLead;
}