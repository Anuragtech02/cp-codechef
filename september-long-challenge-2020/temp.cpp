#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int largest = 0, secondLargest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondLargest && arr[i] != largest)
            secondLargest = arr[i];
    }
    cout << "Largest : " << largest << "Second : " << secondLargest;
    return 0;
}