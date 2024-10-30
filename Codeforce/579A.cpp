#include<iostream>
using namespace std;
int c=0;
int bacteria(int x)
{
    if(x==1)
    {
        c++;
        return 0;
    }
    if(x%2==0)
    {
        return bacteria(x/2);
    }
    else
    {
        c++;
        x=x-1;
        return bacteria(x/2);
    }
}

int main()
{
    int x;
    cin>>x;
    int p=bacteria(x);
    cout<<c<<endl;
    return 0;
}