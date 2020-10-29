#include <iostream>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        int n;
        long int k;
        cin >> n >> k;
        long int A[n], i = 0, carry = 0, sum = 0;
        while (i < n)
        {
            cin >> A[i];
            i++;
        }
        i = 0;
        while (i < n)
        {
            A[i] += carry;
            if (A[i] >= k)
                sum += A[i] - carry;
            else
                break;
            carry = A[i] - k;
            i++;
        }
        cout << sum / k + 1 << "\n";
    }
}