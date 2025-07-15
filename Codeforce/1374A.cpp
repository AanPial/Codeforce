#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int p=0;p<t;p++)
    {
        int x,y,n,k;
        cin>>x>>y>>n;
        k=n-((n-y)%x);
        cout<<k<<endl;
    }
}