#include<iostream>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    int c,t;
    for(int i=1;i<=10;i++)
    {
        t=k*i;
        if(t%10==0 || (t-r)%10==0)
        {
            c=i;
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}