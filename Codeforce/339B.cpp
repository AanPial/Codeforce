#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    long long sum=arr[0]-1;
    for(int i=1;i<m;i++)
    {
        
        
        if(arr[i]==arr[i-1])
        {
            continue;
        }
        else if(arr[i-1]<arr[i])
        {
            sum+=arr[i]-arr[i-1];
        }
        else
        {
            sum+=n-arr[i-1]+arr[i];
        }
        
    }
    cout<<sum<<endl;
}