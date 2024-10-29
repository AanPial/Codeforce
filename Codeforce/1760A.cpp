#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[3];
    for(int i=0;i<t;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        arr[0]=x;
        arr[1]=y;
        arr[2]=z;
        sort(arr,arr+3);
        cout<<arr[1];
    }
}