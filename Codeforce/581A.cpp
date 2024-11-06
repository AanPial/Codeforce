#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int x,y;
    if(a==b)
    {
        x=a;
        y=0;
    }
    else if(a<b)
    {
        x=a;
        y=(b-a)/2;
    }
    else
    {
        x=b;
        y=(a-b)/2;
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}