#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        int n, i = 0, j = 0, count = 0, val;
        cin >> n;
        vector<long int> arr;
        while (i < n)
        {
            cin >> val;
            arr.push_back(i);
        }
        sort(arr.begin(), arr.end());
        i = 0;
        while (i < n)
        {
            j = i + 1;
            while (j < n)
            {
                if (arr[i] ^ arr[j] > arr[j])
                    count++;
                j++;
            }
            i++;
        }
        cout << "\n"
             << count;
    }
}