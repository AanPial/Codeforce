#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        if(sum>0 && sum<n)
        {
            int f=1;
            for(int i=1;i<n;i++)
            {
                if(arr[i]==0 && arr[i-1]==0)
                {
                    f=0;
                    break;
                }
            }
            if(f==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}