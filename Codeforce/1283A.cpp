//1283/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x=n*60+m;
        cout<<(24*60-x)<<endl;
    }
}