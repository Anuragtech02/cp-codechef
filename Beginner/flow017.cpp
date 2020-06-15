#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int nums[3], max = 0;
        cin >> nums[0] >> nums[1] >> nums[2];
        int least = nums[1];
        for (int i = 0; i < 3; i++)
        {
            if (nums[i] > max)
                max = nums[i];
            if (nums[i] < least)
                least = nums[i];
        }
        for (int i = 0; i < 3; i++)
        {
            if (nums[i] < max && nums[i] > least)
                cout << nums[i] << endl;
        }
    }
}