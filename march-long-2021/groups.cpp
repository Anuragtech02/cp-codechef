#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        char str[100000];
        cin >> str;
        int count = 0;
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == '1')
            {
                count++;
                while (str[i] == '1')
                    i += 1;
            }
        }
        cout << count << "\n";
    }
}