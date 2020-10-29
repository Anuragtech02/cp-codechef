#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        long int a, count = 0, i;
        cin >> a;
        vector<int> arr;
        for (i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        while (arr[0])
        {
            long long int largest = 0, secondLargest = 0;
            for (i = 0; i < a; i++)
            {
                if (arr[i] > largest)
                {
                    secondLargest = largest;
                    largest = arr[i];
                }
                else if (arr[i] > secondLargest && arr[i] < largest)
                    secondLargest = arr[i];
            }

            for (i = 0; i < a; i++)
            {
                if (arr[i] > secondLargest)
                    arr[i] = secondLargest;
                if (secondLargest == largest)
                    arr[i] = 0;
            }

            count++;
        }
        printf("%d \n", count);
    }

    return 0;
}
