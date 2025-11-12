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
        int one=0,two=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1) one++;
            else two++;
        }

        if(one==0)
        {
            if(two%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(two==0)
        {
            if(one%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            if(one%2==0 && two%2==0) cout<<"YES"<<endl;
            else if(one%2==0 && two%2!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
