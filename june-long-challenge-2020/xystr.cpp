#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int count = 0;
        string str;
        cin >> str;
        for (int i = 0; i < str.length();)
        {
            if (str[i] != str[i + 1])
            {
                count++;
                i += 2;
            }
            else
                i++;
        }
        cout << count << endl;
    }
    return 0;
}