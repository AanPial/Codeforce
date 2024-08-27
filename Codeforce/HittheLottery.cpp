#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0,t=0;
    if(n>=100)
    {
        t=n/100;
        c=c+t;
        n=n-100*t;
    }
    if(n>=20)
    {
        t=n/20;
        c=c+t;
        n=n-20*t;
    }
    if(n>=10)
    {
        t=n/10;
        c=c+t;
        n=n-10*t;
    }
    if(n>=10)
    {
        t=n/10;
        c=c+t;
        n=n-10*t;
    }
    if(n>=5)
    {
        t=n/5;
        c=c+t;
        n=n-5*t;
    }
    if(n>=1)
    {
        t=n/1;
        c=c+t;
        n=n-1*t;
    }
    cout<<c;
    return 0;
}