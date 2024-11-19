#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    
    int x=0;
    while(m*n!=0)
    {
        if(x==0)
        {
            x=1;
        }
        else
        {
            x=0;
        }
        n=n-1;
        m=m-1;
    }
    if(x==1)
    {
        cout<<"Akshat"<<endl;
    }
    else
    {
        cout<<"Malvika"<<endl;
    }
}