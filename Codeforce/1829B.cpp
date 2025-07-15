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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int MAX=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                MAX=max(MAX,count);
                count=0;
            }
            else
            {
                count++;
            }
        }
        MAX=max(MAX,count);
        cout<<MAX<<endl;
    }
}