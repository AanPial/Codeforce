#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(a<b && b<c)
        {
            cout<<"STAIR"<<endl;
        }
        else if(b>a && b>c)
        {
            cout<<"PEAK"<<endl;
        }
        else
        {
            cout<<"NONE"<<endl;
        }
    }
    return 0;
}