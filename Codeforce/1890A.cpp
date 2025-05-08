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
        int count=0;
        sort(arr,arr+n);
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=arr[i-1])
            {
                count++;
            }
        }
        if(count==0)
        {
            cout<<"YES"<<endl;
        }
        else if(count==1)
        {
            int j;
            for(int i=1;i<n;i++)
            {
                if(arr[i]!=arr[i-1])
                {
                    j=i;
                    break;
                }
            }
            int freq1=j;
            int freq2=n-j;
            if(freq1==freq2 || (freq1-1)==freq2 || freq1==(freq2-1))
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
            cout<<"NO"<<endl;
        }
    }
}
