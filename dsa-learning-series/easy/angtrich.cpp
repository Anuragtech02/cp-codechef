#include <iostream>
using namespace std;

int main()
{
    long int a, b, c;
    cin >> a >> b >> c;
    long long sum = a + b + c;
    cout << (((sum == 180) && a > 0 && b > 0 && c > 0) ? "YES" : "NO");
    return 0;
}