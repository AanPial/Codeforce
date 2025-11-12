#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    while(m--)
    {
        int n;
        cin>>n;
        int arr[n];
        int trr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            trr[i]=arr[i];
        }
        sort(trr,trr+n);
        int min=trr[0];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(min!=arr[i])
            {
                sum+=(arr[i]-min);
            }
        }
        cout<<sum<<endl;
    }
}