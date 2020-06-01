#include<iostream>
using namespace std;
int main()
{
    int x,y,i=0,count=0,n;
    cin>>x>>y;
    //int arr[x];
    while(i<=x)
    {
        cin>>n;
        if(n!=0){
               if(n%y==0) count++;
        }
        else{
            
        }
        i++;
    }
    cout<<count;
    return 0;
}