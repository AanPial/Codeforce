#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        bool sorted=true;
        for(int j=1;j<n;j++)
        {
           if(arr[j]<arr[j-1])
           {
               sorted=false;
               break;
           }
        }
        if(sorted==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(k>1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
