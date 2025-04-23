#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int n=max(x,y);
    if(n==1)
    {
        cout<<"1/1"<<endl;
    }
    else if(n==2)
    {
        cout<<"5/6"<<endl;
    }
    else if(n==3)
    {
        cout<<"2/3"<<endl;
    }
    else if(n==4)
    {
        cout<<"1/2"<<endl;
    }
    else if(n==5)
    {
        cout<<"1/3"<<endl;
    }
    else if(n==6)
    {
        cout<<"1/6"<<endl;
    }
}