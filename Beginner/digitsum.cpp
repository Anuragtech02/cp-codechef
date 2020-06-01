#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, sum=0;
    cin>>n;
    i=n;
    long int number, rem;
    while(i){
        cin>>number;
        while(number){
            rem = number % 10;
            number /= 10;
            sum+=rem;
        }
        cout<<sum<<endl;
        sum = 0;
        i--;
    }

    return 0;
}