#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long t;
        cin >> t;
        long long i = 2;
        while (t % i == 0)
            i *= 2;
        cout << t / i << endl;
    }
}