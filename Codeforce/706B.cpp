#include<bits/stdc++.h>
using namespace std;

int binarysrch(int arr[],int n,int sd)
{
    int l=0,r=n-1;
    int mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(arr[mid]==sd)
        {
            return mid+1;
        }
        else if(arr[mid]<sd)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return l;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int q;
    cin>>q;
    int m;
    for(int i=0;i<q;i++)
    {
        cin>>m;
        int x=binarysrch(arr,n,m);
        cout<<x<<endl;
    }
    return 0;
}