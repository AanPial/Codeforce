#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0],min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            count++;
        }
        if(arr[i]>max)
        {
            max=arr[i];
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}