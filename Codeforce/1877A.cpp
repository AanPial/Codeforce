#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int p=0;p<t;p++)
    {
        int n;
        cin>>n;
        int arr[n-1];
        for(int i=0;i<n-1;i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum+=arr[i];
        }
        cout<<-1*sum<<endl;        
    }
}