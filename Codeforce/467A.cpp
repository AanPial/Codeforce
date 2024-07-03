#include<iostream>
using namespace std;
struct room
{
    int p,q;
};
int main()
{
    int n,c=0;
    cin>>n;
    struct room arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i].p;
        cin>>arr[i].q;
    }
    for(int i=0;i<n;i++)
    {
        int r=arr[i].q-arr[i].p;
        if(r>1)
        {
            c++;
        } 
    }
    cout<<c<<endl;

    return 0;
}