#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n==1||n==0)
    {
        return false;
    }

    for (int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int prime=0;
    int t;
    while(1)
    {
        n++;
        if(isPrime(n)==true)
        {
            t=n;
            prime=1;
            break;
        }
    }

    if(m==t)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}