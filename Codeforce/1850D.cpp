#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int p=0;p<t;p++)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int count=0;
        int Max=0;
        for(int i=1;i<n;i++)
        {
            int x=abs(arr[i]-arr[i-1]);
            if(x<=k)
            {
                count++;
            }
            else
            {
                Max=max(count,Max);
                count=0;
            }
        }
        Max=max(count,Max);
        cout<<n-(Max+1)<<endl; 
    }
}