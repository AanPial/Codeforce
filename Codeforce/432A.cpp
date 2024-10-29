#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int c=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]+k;
        if(arr[i]<=5)
        {
            c++;
        }
    }
    cout<<c/3<<endl;
    return 0;
}