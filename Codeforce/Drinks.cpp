#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    double sum=0.0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    double ans;
    ans=((sum/100.0)/n)*100;
    cout<<ans;

    return 0;
}