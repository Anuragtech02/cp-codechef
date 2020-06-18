#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, k, lost = 0;
        cin >> a >> k;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            arr[i] > k ? lost += arr[i] - k : lost += 0;
        }
        cout << lost << endl;
    }
}