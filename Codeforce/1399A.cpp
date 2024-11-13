#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+n);
        int flag=1;
        for(int j=1;j<n;j++)
        {
            if(arr[j]-arr[j-1]!=1 && arr[j]-arr[j-1]!=0)
            {
                flag=0;
                break;
            }
        }
        if(flag == 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}