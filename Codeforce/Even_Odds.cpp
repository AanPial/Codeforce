#include<iostream>
using namespace std;
int main()
{
    long long n,k,p,data;
    cin>>n;
    cin>>k;

    if(n%2 == 0)
    {
        p=n/2;
    }
    else
    {
        p=(n/2)+1;
    }
    if(k<=p)
    {
        data=k+k-1;
    }
    else
    {
        data=(k-p)*2;
    }
    cout<<data<<endl;

    return 0;
}