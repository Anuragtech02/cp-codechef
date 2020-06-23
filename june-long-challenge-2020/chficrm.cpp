#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t, change = 0, flag = 0;
        cin >> t;
        int arr[t];
        for (int i = 0; i < t; i++)
            cin >> arr[i];

        for (int i = 0; i < t; i++)
        {
            if ((arr[i] - 5) <= change)
            {
                flag = 1;
                change += 5;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }
}