#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int z=n,r=n;
    int b=n;
    
    while(b>0)
    {
        b=r/m;
        r=r%m+b;
        z=z+b;
    }

    cout<<z<<endl;
}