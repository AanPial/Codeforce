#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c,z;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        c=(a+b)/2;
        z=(c-a)+(b-c);
        cout<<z<<endl;
    }
    return 0;
}