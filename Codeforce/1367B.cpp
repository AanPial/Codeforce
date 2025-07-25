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
        int arr[n],crr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                crr[i]=0;
            }
            else
            {
                crr[i]=1;
            }
        }
        int missmatcheven=0,missmatchodd=0;
        for(int i=0;i<n;i++)
        {
            if((arr[i]%2)!=crr[i])
            {
                if(arr[i]%2==0)
                {
                    missmatcheven++;
                }
                else
                {
                    missmatchodd++;
                }
            }
        }
        if(missmatcheven==missmatchodd)
        {
            cout<<((missmatcheven+missmatchodd)/2)<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}