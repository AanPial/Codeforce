#include<iostream>
using namespace std;
int main()
{
    int t,x;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        int c=0,p=0;
        while (c<x)
        {
            if(p % 3 != 0 && p % 10 != 3)
            {
                c++;
            }
            p++;
            
        }
        cout<<p-1<<endl;
    }
}