#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int Maximum=arr[0];
        for(int i=1;i<n;i++)
        {
            Maximum=max(Maximum,arr[i]-arr[i-1]);
        }
        Maximum=max(Maximum,2*(x-arr[n-1]));
        cout<<Maximum<<endl;
    }
    return 0;
}