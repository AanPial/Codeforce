#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    int p,q;
    for(int i=0;i<n;i++)
    {
        if(max == arr[i])
        {
            p=i;
            break;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        if(min==arr[i])
        {
            q=i;
        }
    }
    int swap;
    if(p<q)
    {
        swap=p+((n-1)-q);
    }
    else
    {
        swap=p+((n-1)-q)-1;
    }
    cout<<swap<<endl;
    return 0;
}