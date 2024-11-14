#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s=0,d=0,p=1;
    int i=0,j=n-1;
    while(i<=j)
    {
        if(p==1)
        {
            if(arr[i]>arr[j])
            {
                s+=arr[i];
                i++;
                p=0;
            }
            else
            {
                s+=arr[j];
                j--;
                p=0;
            }
        }
        else
        {
            if(arr[i]>arr[j])
            {
                d+=arr[i];
                i++;
                p=1;
            }
            else
            {
                d+=arr[j];
                j--;
                p=1;
            }
        }
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}