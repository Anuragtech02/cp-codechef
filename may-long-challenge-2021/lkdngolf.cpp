#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        bool forward = x % k == 0;
        bool backward = ((n + 1 - x) % k) == 0;
        cout << ((forward || backward) ? "Yes" : "No")
             << "\n";
    }

    return 0;
}