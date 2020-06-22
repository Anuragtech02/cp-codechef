#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, B, M, cache_size = 0, count = 0, found = 0;
        cin >> N >> B >> M;
        cache_size = B;
        int cache[B], arr[M];
        for (int i = 0; i < M; i++)
            cin >> arr[M];
        for (int i = 0; i < cache_size; i++)
        {
            cache[i] = arr[i];
        }
    }
}