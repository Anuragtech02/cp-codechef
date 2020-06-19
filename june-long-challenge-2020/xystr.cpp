#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int count = 0;
        char str[100000];
        cin >> str;
        for (int i = 0; str[i] != '\0';)
        {
            if ((str[i] == 'x' && str[i + 1] == 'y') || (str[i] == 'y' && str[i + 1] == 'x'))
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