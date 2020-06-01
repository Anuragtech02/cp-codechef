#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int wAmount;
    float balance;
    cin>>wAmount>>balance;

    if(wAmount % 5==0 && wAmount < balance && wAmount >0 && balance >0) cout<<fixed<<setprecision(2)<<balance - wAmount - 0.50;
    else{
        cout<<fixed<<setprecision(2)<<balance;
    }
}