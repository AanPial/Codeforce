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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        arr[0]+=1;
        int pr=1;
        for(int i=0;i<n;i++)
        {
            pr=pr*arr[i];
        }

        cout<<pr<<endl;
    }
}